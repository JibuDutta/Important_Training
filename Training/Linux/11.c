#include<stdio.h>
int f1 (int c ,int d)
{
	int r;

	r = c + d;

	return r;
	
}
int main()
{
	int a;
	int b;
	int r;
	 
	a = 4;
	b = 5;

	r = f1(a,b);

	return 0;
}
