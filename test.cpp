//<<<<Bala Compiler>>>>
#include<iostream>
#include<string.h>
#include<stdio.h>
#define boleano int
#define verdadeiro 1
#define falso 0
#define string char*
int t7;
int t5;
int t4;
int t3;
int t2;
int t6;
int t1;

//global variables:
int v3;
int v2;
int v1;

int main(void)
{
	v1 = 0; // default value
	v2 = 0; // default value
	t1 = 10;
	v2 = t1;
	v3 = 0; // default value
l1: 	t2 = v1 >= v2;
	t2 = !t2;
	if( t2 ) goto l2;
	t3 = 2;
	t4 = v1 + t3;
	v3 = t4;
	t5 = 1;
	t6 = v1 + t5;
	v1 = t6;
	goto l1;
l2:
	t7 = 0;
	v2 = t7;
	return 0;
}
