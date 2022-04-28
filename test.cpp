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
int t4;
float t3;
float t2;
int t1;

//Global variables
float v1;
int v2;
string v3;
float v4;
float v5;
int v6;
float v7;

//prototypes
float f1(float, int, string);
float f2(float, int);

int main(void)
{
	return 0;
}

//functions
float f2(float v5, int v6)
{
	t4 = 3;
	v6 = t4;
	return (float) v6;
}
float f1(float v1, int v2, string v3)
{
	t1 = 3;
	v1 = (float) t1;
	return v1;
}


