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
int t7;
int t5;
int t4;
int t3;
int t2;
int t6;
float t1;

//Global variables
float v1;
float v2;
int v3;
int v4;
int v5;
int v6;

int main(void)
{
	t1 = 40.7;
	v1 = t1;
	t2 = 50;
	v3 = t2;
	t3 = 60;
	t4 = 4;
	t5 = t3 + t4;
	t6 = 90;
	t7 = t5 - t6;
	v5 = t7;
	return 0;
}
