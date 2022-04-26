%{
#include "headers/system.hpp"
#include "string.h"


#define YYSTYPE attribute

using namespace std;

int yylex(void);
%}

%token TK_ID
%token TK_EXPLICIT_CONVERTER
%token TK_NUM TK_REAL TK_CHAR TK_BOOL TK_STRING
%token TK_TYPE_INT TK_TYPE_FLOAT TK_TYPE_BOOL TK_TYPE_CHAR TK_TYPE_STRING TK_VAR
%token TK_BIG TK_SMALL TK_NOT_EQ TK_BIG_EQ TK_SMALL_EQ TK_EQ
%token TK_AND TK_OR TK_NOT
%token TK_IF TK_ELSE
%token TK_FOR TK_WHILE TK_DO
%token TK_SWITCH TK_CASE TK_DEFAULT
%token TK_PRINT TK_SCAN
%token TK_BREAK TK_CONTINUE

%token TK_SEMICOLON
%token TK_ADD_ADD TK_SUBTRACT_SUBTRACT
%token TK_ASSIGNMENT
%token TK_ADD_ASSIGNMENT TK_SUBTRACT_ASSIGNMENT TK_MULTIPLICATION_ASSIGNMENT TK_DIVISION_ASSIGNMENT
%token TK_ADD TK_SUBTRACT TK_MULTIPLICATION TK_DIVISION TK_MODULE

%token TK_LINE_COMMENT 
%token TK_START_MULTI_LINE_COMMENT TK_END_MULTI_LINE_COMMENT


%start S

%left TK_AND
%left TK_OR
%left TK_NOT
%left TK_SMALL TK_BIG TK_NOT_EQ TK_EQ TK_BIG_EQ TK_SMALL_EQ
%left TK_MODULE
%left TK_ADD TK_SUBTRACT
%left TK_MULTIPLICATION TK_DIVISION
%left '(' ')'

%nonassoc NO_ELSE
%nonassoc TK_ELSE

%%
//------------------------------------------------------------------------------
S:					
								COMMANDS
								{
									cout << "//<<<<Bala Compiler>>>>" << iniciate() +"\nint main(void)\n{\n" << $1.translation << "\treturn 0;\n}" << endl; 
								};
//------------------------------------------------------------------------------
BLOCK:		
								BLOCK_AUX '{' COMMANDS '}'
								{
									$$.translation = $3.translation;
									popScope(StackContext);
								};
BLOCK_AUX:
								/* vazio */ 
								{
									VariableTable table;
									pushScope(StackContext,table);
									$$.translation = "";
								};
//------------------------------------------------------------------------------
COMMANDS:	
								COMMAND COMMANDS
								{
									$$.translation = $1.translation + $2.translation;
								}
								| /* vazio */ 
								{
									$$.translation = "";
								};
//------------------------------------------------------------------------------
COMMAND: 
								COMMENT
								{
									$$.translation = $1.translation;
								}
								| E TK_SEMICOLON
								{
									$$.translation = $1.translation;
								}
								| DEFINITION TK_SEMICOLON
								{
									$$.translation = $1.translation;
								}
								| BLOCK 
								{
									$$.translation = $1.translation;
								}
								| IF 
								{
									$$.translation = $1.translation;
								}
								| SWITCH
								{
									$$.translation = $1.translation;
								}
								| LOOP
								{
									$$.translation = $1.translation;
								}
								| LOOP_CONTROL TK_SEMICOLON
								{
									$$.translation = $1.translation;
								}
								| IO TK_SEMICOLON
								{
									$$.translation = $1.translation;
								}
								| ASSIGNMENT TK_SEMICOLON
								{
									$$.translation = $1.translation;
								};
//------------------------------------------------------------------------------
COMMENT:
								TK_LINE_COMMENT
								{
									$$.translation = $1.label + "\n";
								}
								| TK_START_MULTI_LINE_COMMENT TK_STRING TK_END_MULTI_LINE_COMMENT
								{
									$$.translation = "/*" + $2.label + "*/" + "\n";
								};
//------------------------------------------------------------------------------
DEFINITION:
								TK_TYPE_INT TK_ID
								{
									$$ = declareTK_TYPE("int", $$, $2);
								}
								| TK_TYPE_FLOAT TK_ID
								{
									$$ = declareTK_TYPE("float", $$, $2);
								}
								| TK_TYPE_CHAR TK_ID
								{
									$$ = declareTK_TYPE("char", $$, $2);
								}
								| TK_TYPE_BOOL TK_ID
								{
									$$ = declareTK_TYPE("bool", $$, $2);
								}
								| TK_TYPE_STRING TK_ID
								{
									$$ = declareTK_TYPE("string", $$, $2);
								};
//------------------------------------------------------------------------------
TYPE:						
								TK_TYPE_INT
								{
									$$.translation = "int";
								}
								| TK_TYPE_FLOAT
								{
									$$.translation = "float";
								}
								| TK_TYPE_CHAR
								{
									$$.translation = "char";
								}
								| TK_TYPE_BOOL
								{
									$$.translation = "bool";
								}
								| TK_TYPE_STRING
								{
									$$.translation = "string";
								};
//------------------------------------------------------------------------------
IO:
								TK_PRINT '(' E ')' 
								{
									$$.translation = makePrint($3);
								}
								| TK_SCAN '(' E ')' 
								{
									$$.translation = makeScan($3);
								}
								| TK_SCAN '(' E ',' TK_NUM ')' 
								{
									$$.translation = makeScan($3, $5.label);
								};
//------------------------------------------------------------------------------
OPERATORS:
								| COMPOUSED_OPERATOR
								{
									$$.translation = $1.translation;
								}
								| UNARY_OPERATOR
								{
									$$.translation = $1.translation;
								};

COMPOUSED_OPERATOR:
								TK_ID TK_ADD_ASSIGNMENT TK_ID
								{
									$$ = makeCompousedOperator($$, $1, "+", $3);
								}
								| TK_ID TK_SUBTRACT_ASSIGNMENT TK_ID
								{
									$$ = makeCompousedOperator($$, $1, "-", $3);
								}
								| TK_ID TK_MULTIPLICATION_ASSIGNMENT TK_ID
								{
									$$ = makeCompousedOperator($$, $1, "*", $3);
								}
								| TK_ID TK_DIVISION_ASSIGNMENT TK_ID
								{
									$$ = makeCompousedOperator($$, $1, "/", $3);
								};

UNARY_OPERATOR:
								TK_ID TK_ADD_ADD
								{
									$$ = makeUnaryOperator($$, $1, "+");
								}
								| TK_ID TK_SUBTRACT_SUBTRACT
								{
									$$ = makeUnaryOperator($$, $1, "-");
								};
//------------------------------------------------------------------------------
ASSIGNMENT:
								TK_ID TK_ASSIGNMENT E 
								{
									$$ = makeAssignment($$, $1, $3, "=");
								}
								| OPERATORS
								{
									$$.translation = $1.translation;
								}
								| TK_VAR TK_ID TK_ASSIGNMENT E
								{
									$$ = makeDeclaredAssignmentVar($$, $2, $4, "=");
								};
//------------------------------------------------------------------------------
E:
								'(' E ')'
								{
									$$.label = $2.label;
									$$.translation = $2.translation;
									$$.type = $2.type;
								}
								| ARITHMETIC
								{
									$$.translation = $1.translation;
								}
								| VARIABLE
								{
									$$.translation = $1.translation;
								}
								| LOGICAL
								{
									$$.translation = $1.translation;
								}
								| RELATIONAL
								{
									$$.translation = $1.translation;
								}
								| E TK_EXPLICIT_CONVERTER TYPE
								{
									$$ = resolveExplicitConversion($1, $3);
								};
//------------------------------------------------------------------------------
ARITHMETIC:
								E TK_MULTIPLICATION E
								{
									$$ = makeExpression($1, "*", $3);
								}
								| E TK_DIVISION E
								{
									$$ = makeExpression($1, "/", $3);
								}
								| E TK_ADD E
								{
									$$ = makeExpression($1, "+", $3);
								}
								| E TK_SUBTRACT E
								{
									$$ = makeExpression($1, "-", $3);
								}
								| E TK_MODULE E
								{
									$$ = makeExpression($1, "%", $3);
								};
//------------------------------------------------------------------------------
VARIABLE:
								TK_NUM
								{
									$$ = createTK_TYPE($$, "int", $1);
								}
								| TK_REAL
								{
									$$ = createTK_TYPE($$, "float", $1);
								}
								| TK_CHAR
								{
									$$ = createTK_TYPE($$, "char", $1);
								}
								| TK_BOOL
								{
									$$ = createTK_TYPE($$, "bool", $1);
								}
								| TK_STRING
								{
									$$ = createTK_TYPE_STRING($$, "string", $1);
								}
								| TK_ID
								{
									$$ = createTK_ID($$, $1);
								};
//------------------------------------------------------------------------------
LOGICAL:
								E TK_AND E 
								{
									$$ = makeExpression($1, "&&", $3);
								}
								|	E TK_OR E 
								{
									$$ = makeExpression($1, "||", $3);
								}
								| TK_NOT E 
								{
									$$ = makeTK_NOT($$, $2);
								};
//------------------------------------------------------------------------------
RELATIONAL:					
								E TK_SMALL E
								{
									$$ = makeExpression($1, "<", $3);
								}
								| E TK_BIG E
								{
									$$ = makeExpression($1, ">", $3);
								}
								| E TK_BIG_EQ E
								{
									$$ = makeExpression($1, ">=", $3);
								}
								| E TK_SMALL_EQ E
								{
									$$ = makeExpression($1, "<=", $3);
								}
								| E TK_EQ E
								{
									$$ = makeExpression($1, "==", $3);
								}
								| E TK_NOT_EQ E
								{
									$$ = makeExpression($1, "!=", $3);
								};
//------------------------------------------------------------------------------
IF:			
								TK_IF '(' E ')' BLOCK %prec NO_ELSE
								{
									$$ = makeIf($$, $3, $5);
								}
								| TK_IF '(' E ')' BLOCK TK_ELSE BLOCK
								{
									$$ = makeIfElse($$, $3, $5, $7);
								}
								| TK_ID TK_ASSIGNMENT '(' E ')' '?' VARIABLE ':' VARIABLE TK_SEMICOLON
								{
									$$ = makeIfTernary($$, $1, $4, $7, $9);
								};			
//------------------------------------------------------------------------------
LOOP: 		
								LOOP_AUX DO_WHILE 
								{ 
									$$ = endLoop($$, $2); 
								}
								| LOOP_AUX WHILE 
								{ 
									$$ = endLoop($$, $2);
								}
								| LOOP_AUX FOR 
								{ 
									$$ = endLoop($$, $2);
								};

LOOP_AUX: 		
								TK_DO 
								{ 
									iniciateLoop("doWhile");
								}
								| TK_WHILE
								{ 
									iniciateLoop("while");
								}
								| TK_FOR 
								{ 
									iniciateLoop("for");
								};

//------------------------------------------------------------------------------
LOOP_CONTROL:
								BREAK
								{ 
									$$.translation = $1.translation; 
								}
								| CONTINUE
								{ 
									$$.translation = $1.translation; 
								}

BREAK:					
								TK_BREAK
								{ 
									$$ = makeBreak($$, $1);	
								};

CONTINUE: 	
								TK_CONTINUE
								{ 
									$$ = makeContinue($$, $1); 
								};
//------------------------------------------------------------------------------
FOR:						
								'(' TK_ID TK_SEMICOLON RELATIONAL TK_SEMICOLON ASSIGNMENT ')' BLOCK
								{
									$$ = makeForCounter($$, $2, $4, $6, $8);
								};
//------------------------------------------------------------------------------
WHILE:						
								'(' RELATIONAL ')' BLOCK
								{
									$$ = makeWhile($$, $2, $4);
								};
//------------------------------------------------------------------------------
DO_WHILE:						
								BLOCK TK_WHILE '(' RELATIONAL ')' 
								{
									$$ = makeDoWhile($$, $1, $4);
								};
//------------------------------------------------------------------------------
SWITCH:					
								TK_SWITCH '(' SEEKER_SWITCH ')' BLOCK_SWITCH
								{	
									$$ = iniciateSwitch($$, $5); 
								};

SEEKER_SWITCH: 	
								TK_ID
								{	
									createSwicher($1); 
								};

BLOCK_SWITCH:		
								'{' CASES TK_DEFAULT ':' BLOCK '}'
								{
									$$ = resolveBlockSwitch($$, $2, $5);
								};

CASES:					
								TK_CASE VARIABLE_SWITCH ':' BLOCK CASES
								{
									$$ = resolveCasesSwitch($$, $2, $4, $5);
								}
								| /* vazio */
								{	
									$$.translation = ""; 
								};

VARIABLE_SWITCH:
								VARIABLE
								{
									$$ = resolveCheckerSwitch($$, "==", $1);
								}
								|
								TK_BIG VARIABLE
								{
									$$ = resolveCheckerSwitch($$, ">", $2);
								}
								|
								TK_BIG_EQ VARIABLE
								{
									$$ = resolveCheckerSwitch($$, ">=", $2);
								}
								|
								TK_SMALL VARIABLE
								{
									$$ = resolveCheckerSwitch($$, "<", $2);
								}
								|
								TK_SMALL_EQ VARIABLE
								{
									$$ = resolveCheckerSwitch($$, "<=", $2);
								};
//------------------------------------------------------------------------------
%%

#include "lex.yy.c"

int yyparse();


int main( int argc, char* argv[] )
{
	iniciateCoercionTable();
	iniciateScanHelperTable();
	iniciateStringExpressionHelperTable();
	
	yyparse();

	return 0;
}