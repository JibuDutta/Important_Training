#include<stdio.h>
int main()
{
	int x=2;
	int y=0;
	int z=0;

	x*=y=z=4;
	
	printf("%d",x);
	
	return 0;
}
