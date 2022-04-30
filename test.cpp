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
int t11;
int t12;
int t9;
int t8;
int t10;
int t7;
int t5;
int t4;
int t3;
int t2;
int t6;
int t1;

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
	t1 = 10;
	v1 = ( int* ) malloc( sizeof(int) * t1 );
	v2 = 0; // default value
	v3 = 0; // default value
	//*for init*//
l1: 	t2 = 10;
	t3 = v3 < t2;
	t3 = !t3;
	if( t3 ) goto l2;
	t5 = 1;
	t6 = v2 + t5;
	v2 = t6;
	v4 = v2;
	v1 [ v3 ] = v4;
	l3:
	t4 = 1;
	v3 = (v3 + t4)  /*unary operator*/ ;
	goto l1;
l2:
	//*for end*//
	t8 = 0;
	v3 = t8;
	//*for init*//
l4: 	t9 = 10;
	t10 = v3 < t9;
	t10 = !t10;
	if( t10 ) goto l5;
	v5 = 0; // default value
	v5 = v1 [ v3 ];
	cout << v5 << endl;
	l6:
	t11 = 1;
	v3 = (v3 + t11)  /*unary operator*/ ;
	goto l4;
l5:
	//*for end*//
	return 0;
}

//functions


