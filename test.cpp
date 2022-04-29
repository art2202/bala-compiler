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
int t14;
int t1;
int t2;
int t4;
int t6;
int t5;
int t3;
int t9;
int t12;
int t8;
int t11;
int t7;
int t10;
int t13;

//Global variables
int* v1;
int v2;
int v3;
int v4;
int v5;
int v6;

//prototypes

int main(void)
{
	t1 = 11;
	v1 = ( int* ) malloc( sizeof(int) * t1 );
	v2 = 0; // default value
	v3 = 0; // default value
	//*for init*//
l1: 	t2 = 10;
	t3 = v3 < t2;
	t3 = !t3;
	if( t3 ) goto l2;
	t6 = 1;
	t7 = v2 + t6;
	v2 = t7;
	v4 = v2;
	v1 [ v3 ] = v4;
	l3:
	t4 = 1;
	t5 = v3 + t4;
	v3 = t5;
	goto l1;
l2:
	//*for end*//
	t9 = 0;
	v3 = t9;
	//*for init*//
l4: 	t10 = 10;
	t11 = v3 < t10;
	t11 = !t11;
	if( t11 ) goto l5;
	v5 = 0; // default value
	v5 = v1 [ v3 ];
	cout << v5 << endl;
	l6:
	t12 = 1;
	t13 = v3 + t12;
	v3 = t13;
	goto l4;
l5:
	//*for end*//
	return 0;
}

//functions


