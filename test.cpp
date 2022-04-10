//pushScope
//actualScope: 0
//actualScope push: 1
//pushScope
//actualScope: 1
//actualScope push: 2
//stack->actualScope: 1
//BLOCO_AUX
//pushScope
//actualScope: 1
//actualScope push: 2
//declareTK_TYPE
//top[label].label: 
//dentro do if
//addSymbolInScope
//makeAssignment
//validateTK_ID
//top[label].label: i
//dentro do if
//top[label].label: i
//dentro do if
//declareTK_TYPE
//top[label].label: 
//dentro do if
//addSymbolInScope
//BLOCO_AUX
//pushScope
//actualScope: 2
//actualScope push: 3
//declareTK_TYPE
//top[label].label: 
//dentro do if
//addSymbolInScope
//makeAssignment
//validateTK_ID
//top[label].label: coisa
//dentro do if
//top[label].label: coisa
//dentro do if
//BLOCK
//popScope
//actualScope antes pop: 3
//actualScope depois pop: 2
//BLOCO_AUX
//pushScope
//actualScope: 2
//actualScope push: 3
//declareTK_TYPE
//top[label].label: 
//dentro do if
//addSymbolInScope
//makeAssignment
//validateTK_ID
//top[label].label: b
//dentro do if
//top[label].label: b
//dentro do if
//BLOCK
//popScope
//actualScope antes pop: 3
//actualScope depois pop: 2
//makeAssignment
//validateTK_ID
//top[label].label: a
//dentro do if
//top[label].label: a
//dentro do if
//BLOCK
//popScope
//actualScope antes pop: 2
//actualScope depois pop: 1
//<<<<Bala Compiler>>>>
#include<iostream>
#include<string.h>
#include<stdio.h>
#define bool int
#define true 1
#define false 0
#define string char*
float t5;
float t4;
int t3;
int t2;
int t1;

int main(void)
{
float v2;
int v1;
	v1 = 0; // default value
	t1 = 1;
	v1 = t1;
	v2 = 0.000000; // default value
	v1 = !v1;
	if( v1 ) goto l1;
int v3;
	v3 = 0; // default value
	t2 = 94;
	v3 = t2;
	goto l2;
	l1:
int v4;
	v4 = 0; // default value
	t3 = 3;
	v4 = t3;
	l2:
	v2 = (float) v1;
	return 0;
}
