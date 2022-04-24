//<<<<Bala Compiler>>>>
//Includes
#include<iostream>
#include<string.h>
#include<stdio.h>

//Defines
#define bool int
#define verdadeiro 1
#define falso 0
#define string char*

using namespace std;

//Temporaries
bool t5;
int t4;
bool t3;
int size_v2;
int size_t2;
string t2;
int size_v1;
int size_t1;
int t6;
string t1;

//Global variables
string v1;
string v2;
bool v3;

int main(void)
{
	v3 = falso; // default value
	size_t1 = 7;
	t1 = (string) realloc(t1, size_t1);
	strcpy( t1, "texto." );

	size_v1 = size_t1;
	v1 = (string) realloc(v1, size_v1);
	strcpy( v1, t1 );

	size_t2 = 6;
	t2 = (string) realloc(t2, size_t2);
	strcpy( t2, "texto" );

	size_v2 = size_t2;
	v2 = (string) realloc(v2, size_v2);
	strcpy( v2, t2 );

	t4 = strcmp(v1, v2 );
	t6 = 0;
	t5 = t4>=t6;

	v3 = t5;
	return 0;
}
