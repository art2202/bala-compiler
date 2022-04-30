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
int t25;
int t21;
int t20;
int t23;
int t22;
int t19;
int t18;
int t26;
int t17;
int t14;
int t1;
int t15;
int t2;
int t4;
int t6;
int t5;
int t3;
int t9;
int t24;
int t12;
int t8;
int t11;
int t16;
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
int v7;
int v8;
int v9;
int v10;
int v11;
int v12;
int v13;

//prototypes

int main(void)
{
	t1 = 5;
	t2 = 5;
	t3 = t1 * t2;
	v1 = ( int* ) malloc( sizeof(int) * t3 );
	v2 = 0; // default value
	v3 = 0; // default value
	//*for init*//
	t4 = 0;
	v4 = t4;
l1: 	t5 = 5;
	t6 = v4 < t5;
	t6 = !t6;
	if( t6 ) goto l2;
	//*for init*//
	t8 = 0;
	v6 = t8;
l4: 	t9 = 5;
	t10 = v6 < t9;
	t10 = !t10;
	if( t10 ) goto l5;
	t12 = 1;
	v2 = (v2 + t12)  /*unary operator*/ ;
	t14 = v4 * t2;
	t15 = t14 + v6;
	v8 = v2;
	v1 [ t15 ] = v8;
	l6:
	t11 = 1;
	v6 = (v6 + t11)  /*unary operator*/ ;
	goto l4;
l5:
	//*for end*//
	l3:
	t7 = 1;
	v4 = (v4 + t7)  /*unary operator*/ ;
	goto l1;
l2:
	//*for end*//
	//*for init*//
	t16 = 0;
	v9 = t16;
l7: 	t17 = 5;
	t18 = v9 < t17;
	t18 = !t18;
	if( t18 ) goto l8;
	//*for init*//
	t20 = 0;
	v11 = t20;
l10: 	t21 = 5;
	t22 = v11 < t21;
	t22 = !t22;
	if( t22 ) goto l11;
	t25 = v9 * t2;
	t26 = t25 + v11;
	v3 = v1 [ t26 ];
	cout << v3 << endl;
	l12:
	t23 = 1;
	v11 = (v11 + t23)  /*unary operator*/ ;
	goto l10;
l11:
	//*for end*//
	l9:
	t19 = 1;
	v9 = (v9 + t19)  /*unary operator*/ ;
	goto l7;
l8:
	//*for end*//
	return 0;
}

//functions


