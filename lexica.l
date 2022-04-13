%{
#include <string>

%}

SPACE [ \t]
DIGIT [0-9]
LETTER [A-Za-z_]
BOOL "verdadeiro"|"falso"

DELIM {SPACE}+
NUM {DIGIT}+
REAL {NUM}+("."{NUM}+)?
CHAR \'({LETTER}|{NUM})\'

ID {LETTER}({LETTER}|{NUM})*

%%

"\n"        {}

{DELIM}     {}

"main"      {return TK_MAIN;}

"inteirinho"  {return TK_TYPE_INT;}
"flutuante"   {return TK_TYPE_FLOAT;}
"caracter"    {return TK_TYPE_CHAR;}
"boleano"     {return TK_TYPE_BOOL;}

"como"        {return TK_EXPLICIT_CONVERTER;}

[(){}[\];,.]  {return *yytext;}
[+\-*/=]      {return *yytext;}


">"     {return TK_BIG;}
"<"     {return TK_SMALL;}
"!="    {return TK_NOT_EQ;}
">="    {return TK_BIG_EQ;}
"<="    {return TK_SMALL_EQ;}
"=="    {return TK_EQ;}

"&&"    {return TK_AND;}
"||"    {return TK_OR;}
"!"     {return TK_NOT;}

"por acaso"   {return TK_IF;}
"esquece"     {return TK_ELSE;}

"forzinho"   {return TK_FOR;}
"enquanto"   {return TK_WHILE;}


{NUM}     {yylval.label = yytext; return TK_NUM;}
{REAL}    {yylval.label = yytext; return TK_REAL;}
{CHAR}    {yylval.label = yytext; return TK_CHAR;}
{BOOL}    {yylval.label = yytext; return TK_BOOL;}
{ID}      {yylval.label = yytext; return TK_ID;}

.         { *yytext; }

%%