#include<stdio.h>

#define MAX(a,b) (a > b ? printf("%d\n",a) : printf("%d\n", b))

int main(void)
{
	int x = 11;
	int y = 22;
	
	MAX(x,y);

	return 0;
}
