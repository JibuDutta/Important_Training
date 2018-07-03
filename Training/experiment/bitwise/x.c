#include<stdio.h>
#define MAX(a,b) (a<b?b:a)
#define MAX1(a,b) (a<b?b:a)
int main()
{
	int a = 200,b = 20,c = -96 ,d = 999;
	printf("%d\n",MAX(MAX1(a,b),MAX1(c,d)));
	return 0;
}
