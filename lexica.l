%{

#include <string>

%}

START_LINE_COMMENT "//"
LINE_COMMENT {START_LINE_COMMENT}.*
START_MULTI_LINE_COMMENT "<!--"
END_MULTI_LINE_COMMENT "-->"


SPACE [ \t]
DIGIT [0-9]
LETTER [A-Za-z_]
BOOL "verdadeiro"|"falso"

DELIM {SPACE}+
NUM {DIGIT}+
REAL {NUM}+("."{NUM}+)?
CHAR \'({LETTER}|{NUM})\'

ID {LETTER}({LETTER}|{NUM})*

%x SINGLE_STRING
%%
\"                          BEGIN(SINGLE_STRING);
<SINGLE_STRING>{
  \n                        yyerror("the string misses \" to termiate before newline");
  <<EOF>>                   yyerror("the string misses \" to terminate before EOF");
  ([^\\\"]|\\.)*            {yylval.label = yytext; return TK_STRING;}
  \"                        BEGIN(INITIAL);
  .                         ;
}




"\n"          {}
{DELIM}       {}


"inteirinho"  {return TK_TYPE_INT;}
"flutuante"   {return TK_TYPE_FLOAT;}
"caracter"    {return TK_TYPE_CHAR;}
"boleano"     {return TK_TYPE_BOOL;}
"texto"       {return TK_TYPE_STRING;}

"var"         {return TK_VAR;}

"como"        {return TK_EXPLICIT_CONVERTER;}

[(){}[\]:,.'?]  {return *yytext;}


";"       {return TK_SEMICOLON;}
"++"      {return TK_ADD_ADD;}
"--"      {return TK_SUBTRACT_SUBTRACT;}

"="       {return TK_ASSIGNMENT;}
"+="      {return TK_ADD_ASSIGNMENT;}
"-="      {return TK_SUBTRACT_ASSIGNMENT;}
"*="      {return TK_MULTIPLICATION_ASSIGNMENT;}
"/="      {return TK_DIVISION_ASSIGNMENT;}

"+"       {return TK_ADD;}
"-"       {return TK_SUBTRACT;}
"*"       {return TK_MULTIPLICATION;}
"/"       {return TK_DIVISION;}
"%"       {return TK_MODULE;}




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

"forzinho"    {return TK_FOR;}
"enquanto"    {return TK_WHILE;}
"fazer"       {return TK_DO;}

"switch"      {return TK_SWITCH;}
"case"        {return TK_CASE;}
"default"     {return TK_DEFAULT;}
"mostrar"     {return TK_PRINT;}
"ler"         {return TK_SCAN;}

"break"       {return TK_BREAK;}
"continue"    {return TK_CONTINUE;}


{LINE_COMMENT}              {yylval.label = yytext; return TK_LINE_COMMENT;}
{START_MULTI_LINE_COMMENT}  {yylval.label = yytext; return TK_START_MULTI_LINE_COMMENT;}
{END_MULTI_LINE_COMMENT}    {yylval.label = yytext; return TK_END_MULTI_LINE_COMMENT;}

{NUM}     {yylval.label = yytext; return TK_NUM;}
{REAL}    {yylval.label = yytext; return TK_REAL;}
{CHAR}    {yylval.label = yytext; return TK_CHAR;}
{BOOL}    {yylval.label = yytext; return TK_BOOL;}
{ID}      {yylval.label = yytext; return TK_ID;}

.         { *yytext; }

%%