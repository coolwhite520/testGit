#include <stdio.h>

int add(int a,int b)
{
	int c = a + b;
	return c;
}

int sub(int a,int b)
{
	return a - b;
}

void make()
{
	int i =0;
	for(;i<100;i++)
		printf("make");
	return;
}