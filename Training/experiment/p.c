#include<stdio.h>
int test(int c,int d)
{
	return c + d;
}
int main(void)
{
	int r1;

	int (*ptr)(int,int);
	
	ptr = test;
	
	r1 = (*ptr)(12,28);
	printf("The sum is = %d \n",r1);

	return 0;
}
