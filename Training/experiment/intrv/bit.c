#include<stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	
	printf("Enter the No\n");
	scanf("%d",&num);

	for(i=31;i>=0;i--)
		printf("%d",(num >> i)&1);
	printf("\n");

	//num = num ^ 0xAAAAAAAA;
	num = num ^ 0x55555555;

	for(i=31;i>=0;i--)
		printf("%d",(num >> i)&1);
	printf("\n");

	return 0;

}
