//<<<<Bala Compiler>>>>
//Includes
#include<iostream>
#include<string.h>
#include<stdio.h>

//Defines
#define boleano int
#define verdadeiro 1
#define falso 0
#define string char*

//Temporaries
float t9;
int t8;
int t7;
float t5;
int t4;
int t3;
int t2;
float t6;
int t1;

//Global variables
int v1;
float v2;
int v3;

int main(void)
{
	v1 = 0; // default value
	v2 = 0.000000; // default value
	v3 = 0; // default value
	//*for init*//
l1: 	t1 = 10;
	t2 = v1 < t1;
	t2 = !t2;
	if( t2 ) goto l2;
	t5 = 2.0;
	t6 = v2 == t5;
	t6 = !t6;
	if( t6 ) goto l4;
	t7 = 20;
	v3 = t7;
	//*break init*//
	goto l2;
	//*break end*//
	goto l5;
	l4:
	t8 = 30;
	v3 = t8;
	l5:
	t9 = 2.0;
	v2 = t9;
	//*continue init*//
	goto l3;
	//*continue end*//
	l3:
	t3 = 1;
	t4 = v1 + t3;
	v1 = t4;
	goto l1;
l2:
	//*for end*//
	return 0;
}
