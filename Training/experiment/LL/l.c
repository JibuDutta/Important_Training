#include<stdio.h>
int main()
{
	int num, i,cnt = 0;
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		if(num & (1 << i))
			cnt++;
		
	}
	for(i=31;i>=0;i--)
		printf("%d",(num >>i) & 1);
	printf("\n");

	printf("count  = %d\n",cnt);
	return 0;
}
