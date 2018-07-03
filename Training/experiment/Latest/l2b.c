#include<stdio.h>
int main()
{
	int num;
	int byte0,byte1,byte2,byte3;
	int i;

	printf("Enter the number\n");
	scanf("%d",&num);
	for(i = 31 ; i >= 0 ; i--)
	{
		printf("%d",((num >> i) & 1));
	}
	printf("\n");

	byte0 = ((num & 0x000000FF) >> 0);
	byte1 = ((num & 0x000000FF) >> 8);
	byte2 = ((num & 0x000000FF) >> 16);
	byte3 = ((num & 0x000000FF) >> 24);

	num =  (byte0 << 24) | (byte1 << 16) | (byte2 << 8) | (byte3 << 0);
	
	for(i = 31 ; i >= 0 ; i--)
	{
		printf("%d",((num >> i) & 1));
	}
	printf("\n");

	return 0;
}
