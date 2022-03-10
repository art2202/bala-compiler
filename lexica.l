%{
#include <string>

%}

SPACE [ \t]
DIGIT [0-9]
LETTER [A-Za-z_]
BOOL "true"|"false"

DELIM {SPACE}+
NUM {DIGIT}+
REAL {NUM}+("."{NUM}+)?
CHAR \'({LETTER}|{NUM})\'
STRING {CHAR}(CHAR)*

ID {LETTER}({LETTER}|{NUM})*

%%

"\n"        {}

{DELIM}     {}

"main"      {return TK_MAIN;}

"int"       {return TK_TYPE_INT;}
"float"     {return TK_TYPE_FLOAT;}
"char"      {return TK_TYPE_CHAR;}
"bool"      {return TK_TYPE_BOOL;}
"string"    {return TK_TYPE_STRING;}

[(){}[\];,.]  { return *yytext; }
[+\-*/=]      { return *yytext; }

{NUM}     { yylval.label = yytext; return TK_NUM; }
{REAL}    { yylval.label = yytext; return TK_REAL; }
{CHAR}    { yylval.label = yytext; return TK_CHAR; }
{STRING}  { yylval.label = yytext; return TK_STRING; }
{BOOL}    { yylval.label = yytext; return TK_BOOL; }
{ID}      { yylval.label = yytext; return TK_ID; }

.         { *yytext; }

%%