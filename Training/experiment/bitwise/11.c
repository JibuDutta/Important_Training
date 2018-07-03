#include<stdio.h>
int main(void)

{
	int num ,bit,i,src,dest;
	printf("Enter the no\n");
	scanf("%d",&num);

	for(i=31;i>=0;i--)
		printf("%d",(num >> i) & 1);

	printf("\nEnter Source and Destination pos\n");
	scanf("%d%d",&src,&dest);

	for(i=0;i<=31;i++)
	{
		if((i>=src) && (i<=dest))
			num = num | (1<<i);
		else
			num = num  & (~(1<<i));
	}
	for(i=31;i>=0;i--)
		printf("%d",(num >> i) & 1);
	printf("\n");

	return 0;	
}
