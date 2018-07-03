#ifndef __STDIO_H
#define __STDIO_H

//#include<stdio.h>
inline int add (int a, int b);
int main(void)
{
	int a = 10;
	int b = 20;
	int c =0;
	c = add(a,b);
	printf("SUM IS = %d\n",c);

}

inline int add (int a, int b)
{

	return a + b;
}
#endif
