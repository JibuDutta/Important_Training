#include<stdio.h>
struct aaa
{

char b;
int :0;
char d;
short :5;
char s:3;
}A;

main()
{
	printf("%d\n",sizeof(A));
}
