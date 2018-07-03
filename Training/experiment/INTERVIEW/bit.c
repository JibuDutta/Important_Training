#include<stdio.h>
int main()
{	
	int num,i,bit,j;

	scanf("%d",&num);
	scanf("%d",&bit);
	for(i = 31;i >=0 ;i--)
		printf("%d",(num >> i) & 1);
	printf("\n");
		
//	num = num ^ (1 << bit);
//	num  = num ^ 0xAAAAAAAA;
//	num  = num ^ 0x55555555;

	for(i = 31, j = 0 ; i > j ; i--,j++)
	{
		if( (num & ( 1 << i)) != (num & (1<<j)) )
		{
			num = num ^ (1 << i );
			num = num ^ (1 << j );
		}
	}

	for(i = 31;i >=0 ;i--)
		printf("%d",(num >> i) & 1);
	printf("\n");

	return 0;
}
