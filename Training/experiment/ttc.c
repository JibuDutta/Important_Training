#include<stdio.h>
int main()
{
	int a = -23,i;
	
	for(i = 31 ; i >= 0; i--)
		printf("%d",(a >> i)&1);
	printf("\n\n");
	
	return 0;
}
