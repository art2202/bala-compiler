%{
#include "headers/system.hpp"

#define YYSTYPE attribute

using namespace std;

int yylex(void);
%}

%token TK_ID
%token TK_EXPLICIT_CONVERTER
%token TK_NUM TK_REAL TK_CHAR TK_BOOL
%token TK_TYPE_INT TK_TYPE_FLOAT TK_TYPE_BOOL TK_TYPE_CHAR
%token TK_BIG TK_SMALL TK_NOT_EQ TK_BIG_EQ TK_SMALL_EQ TK_EQ
%token TK_AND TK_OR TK_NOT
%token TK_IF TK_ELSE
%token TK_FOR TK_WHILE TK_DO
%token TK_SWITCH TK_CASE TK_DEFAULT
%token TK_BREAK TK_CONTINUE

%start S

%left TK_AND
%left TK_OR
%left TK_NOT
%left TK_SMALL TK_BIG TK_NOT_EQ TK_EQ TK_BIG_EQ TK_SMALL_EQ
%left '%'
%left '+' '-'
%left '*' '/'
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
									//cout << "ss.translation\n" << $$.translation << endl;
									$$.translation = $3.translation;
									//cout << "ss.translation\n" << $$.translation << endl;
									popScope(StackContext);
								};
BLOCK_AUX:
								/* vazio */ 
								{
									VariableTable table;
									pushScope(StackContext,table);
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
								E ';'
								{
									$$.translation = $1.translation;
								}
								| DEFINITION
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
								| LOOP
								{
									$$.translation = $1.translation;
								}
								| LOOP_CONTROL
								{
									$$.translation = $1.translation;
								}
								| SWITCH
								{
									$$.translation = $1.translation;
								}
								;
//------------------------------------------------------------------------------
COMMAND_ALT:
								E ';'
								| IF 
								{
									$$.translation = $1.translation;
								}
								| LOOP
								{
									$$.translation = $1.translation;
								}
								| LOOP_CONTROL
								{
									$$.translation = $1.translation;
								}
								| SWITCH
								{
									$$.translation = $1.translation;
								};
//------------------------------------------------------------------------------
DEFINITION:
								TK_TYPE_INT TK_ID ';'
								{
									$$ = declareTK_TYPE("int", $$, $1, $2);
								}
								| TK_TYPE_FLOAT TK_ID ';'
								{
									$$ = declareTK_TYPE("float", $$, $1, $2);
								}
								| TK_TYPE_CHAR TK_ID ';'
								{
									$$ = declareTK_TYPE("char", $$, $1, $2);
								}
								| TK_TYPE_BOOL TK_ID ';'
								{
									$$ = declareTK_TYPE("bool", $$, $1, $2);
								};
//------------------------------------------------------------------------------
TYPE:						
								TK_TYPE_INT
								{
									$$.translation = "int";
								}
								TK_TYPE_FLOAT
								{
									$$.translation = "float";
								}
								TK_TYPE_CHAR
								{
									$$.translation = "char";
								}
								TK_TYPE_BOOL
								{
									$$.translation = "bool";
								};
//------------------------------------------------------------------------------
E:
								'(' E ')'
								{
									$$.label = $2.label;
									$$.translation = $2.translation;
									$$.type = $2.type;
								}
								| TK_ID '=' E 
								{
									$$ = makeAssignment($$, $1, $3);
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
								E '*' E
								{
									$$ = makeExpression($1, "*", $3);
								}
								| E '/' E
								{
									$$ = makeExpression($1, "/", $3);
								}
								| E '+' E
								{
									$$ = makeExpression($1, "+", $3);
								}
								| E '-' E
								{
									$$ = makeExpression($1, "-", $3);
								}
								| E '%' E
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
								TK_IF '(' E ')' BLOCK_COMMAND %prec NO_ELSE
								{
									$$ = makeIf($$, $3, $5);
								}
								| TK_IF '(' E ')' BLOCK_COMMAND TK_ELSE BLOCK_COMMAND
								{
									$$ = makeIfElse($$, $3, $5, $7);
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
								TK_BREAK ';'
								{ 
									$$ = makeBreak($$, $1);	
								};

CONTINUE: 	
								TK_CONTINUE ';'
								{ 
									$$ = makeContinue($$, $1); 
								};

//------------------------------------------------------------------------------
FOR:						
								'(' TK_ID ';' RELATIONAL ';' E ')' BLOCK_COMMAND
								{
									$$ = makeForCounter($$, $2, $4, $6, $8);
								};
//------------------------------------------------------------------------------

WHILE:						
								'(' RELATIONAL ')' BLOCK_COMMAND
								{
									$$ = makeWhile($$, $2, $4);
								};
//------------------------------------------------------------------------------

DO_WHILE:						
								BLOCK_COMMAND TK_WHILE '(' RELATIONAL ')' 
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
								'{' CASES TK_DEFAULT ':' BLOCK_COMMAND '}'
								{
									$$ = resolveBlockSwitch($$, $2, $5);
								};

CASES:					
								TK_CASE VARIABLE_SWITCH ':' BLOCK_COMMAND CASES
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

BLOCK_COMMAND:	
								BLOCK
								{
									$$.translation = $1.translation;
								}
								| COMMAND_ALT
								{
									$$.translation = $1.translation;
								};
//------------------------------------------------------------------------------
%%

#include "lex.yy.c"

int yyparse();


int main( int argc, char* argv[] )
{
	iniciateCoercionTable();
	
	yyparse();

	return 0;
}