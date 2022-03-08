%{
#include <string>

%}

ESPACO [ \t]
DIGITO [0-9]
LETRA [A-Za-z_]
BOOL "true"|"false"

DELIM {ESPACO}+
NUM {DIGITO}+
REAL {NUM}+("."{NUM}+)?
CHAR \'({LETRA}|{NUM})\'
STRING {CHAR}(CHAR)*

ID {LETRA}({LETRA}|{NUM})*

%%

"\n"		{}

{DELIM} 	{}

"main"		{return TK_MAIN;}

"int"		  {return TK_TIPO_INT;}
"float"		{return TK_TIPO_FLOAT;}
"char"		{return TK_TIPO_CHAR;}
"bool"		{return TK_TIPO_BOOL;}
"string"  {return TK_TIPO_STRING;}

[(){}[\];,.]	{ return *yytext; }
[+\-*/=]		{ return *yytext; }

{NUM}		  { yylval.label = yytext; return TK_NUM; }
{REAL}	  { yylval.label = yytext; return TK_REAL; }
{CHAR}	  { yylval.label = yytext; return TK_CHAR; }
{STRING}	{ yylval.label = yytext; return TK_STRING; }
{BOOL}	  { yylval.label = yytext; return TK_BOOL; }
{ID}		  { yylval.label = yytext; return TK_ID; }

.			{ *yytext; }

%%