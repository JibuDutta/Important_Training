#include<stdio.h>
volatile int a;
int main()
{
	a=5;
	volatile int x = (a++ + a++);
	return 0;
}
