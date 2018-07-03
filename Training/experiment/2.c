#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter a No\n");
	scanf("%d",&num);
	((num & 1) && ( printf("ODD\n")) || printf("Even\n"));
	return 0;
}
