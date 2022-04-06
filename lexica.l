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

ID {LETTER}({LETTER}|{NUM})*

%%

"\n"        {}

{DELIM}     {}

"main"      {return TK_MAIN;}

"int"       {return TK_TYPE_INT;}
"float"     {return TK_TYPE_FLOAT;}
"char"      {return TK_TYPE_CHAR;}
"bool"      {return TK_TYPE_BOOL;}
"string"    {return TK_TIPO_STRING;}

"as"        {return TK_EXPLICIT_CONVERTER;}

[(){}[\];,.]  { return *yytext; }
[+\-*/=]      { return *yytext; }


">"     {return TK_BIG;}
"<"     {return TK_SMALL;}
"!="		{return TK_NOT_EQ;}
">="		{return TK_BIG_EQ;}
"<="		{return TK_SMALL_EQ;}
"=="		{return TK_EQ;}

"&&"		{return TK_AND;}
"||"		{return TK_OR;}
"!"     {return TK_NOT;}

"if"        {return TK_IF;}
"else"      {return TK_ELSE;}
"while"     {return TK_WHILE;}
"do"        {return TK_DO;}
"for"       {return TK_FOR;}
"switch"    {return TK_SWITCH;}
"case"      {return TK_CASE;}

"break"     {return TK_BREAK;}
"continue"  {return TK_CONTINUE;}


{NUM}     { yylval.label = yytext; return TK_NUM; }
{REAL}    { yylval.label = yytext; return TK_REAL; }
{CHAR}    { yylval.label = yytext; return TK_CHAR; }
{BOOL}    { yylval.label = yytext; return TK_BOOL; }
{ID}      { yylval.label = yytext; return TK_ID; }

.         { *yytext; }

%%