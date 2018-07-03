#include<stdio.h>
int main()
{
	int num = 0;
	int  i;
	int cnt = 0;
	printf("Enter the No:");
	scanf("%d",&num);
	for(i = 31 ;i>=0 ;i--)
	{
		printf("%d",((num >> i) &1));
			
	}
	printf("\n");
	for(i =31 ;i>=0; i--)
	{
		if(num & (1 << i))
			cnt++;
	}
	printf("Count:%d",cnt);	
	return 0;
}
