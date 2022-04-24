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
int size_v1;
int size_t1;
string t1;

//Global variables
string v1;

int main(void)
{
	size_t1 = 5;
	t1 = (string) realloc(t1, size_t1);
	strcpy( t1, "gabi" );

	size_v1 = size_t1;
	v1 = (string) realloc(v1, size_v1);
	strcpy( v1, t1 );

	return 0;
}
