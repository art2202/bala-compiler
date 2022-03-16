//<<<<Bala Compiler>>>>
#include<iostream>
#include<string.h>
#include<stdio.h>
#define bool int
#define true 1
#define false 0
bool t2;
bool t1;
bool v1;
bool v2;
bool v3;

int main(void)
{
	v1 = false;
	t1 = true;
	v1 = t1;
	v2 = false;
	v3 = false;
	t2 = v1 || v2;
	v3 = t2;
	return 0;
}
