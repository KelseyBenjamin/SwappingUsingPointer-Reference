#include <iostream>
#include "3a.h" //my header file
using namespace std;
//swap using pointer
void swap1(int *a, int *b, int *c)
{
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

//swap using reference
void swap2(int &a, int &b, int &c)
{
	int temp = a;
	a = b;
	b = c;
	c = temp;
}