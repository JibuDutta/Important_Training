#include<stdio.h>

#define INTEGER int
#define INTPTR int *
//typedef int * INTPTR;

int main(void)
{
	INTEGER x;
	INTPTR p,q;
	x=11;
	p=&x;
	q=&x;
	*q=*p;
	printf("%d %d\n",*p,*q);

	return 0;
}
