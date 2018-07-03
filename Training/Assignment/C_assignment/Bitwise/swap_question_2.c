#include<stdio.h>

int bit_swap (int n, int s, int d);

int main()
{
		int snum,dnum,sbit,dbit,i;

		printf("ENTER THE 1st NUMBER\n");
		scanf("%d",&snum);

		for(i=31;i>=0;i--)
				printf("%d",((snum>>i)&1));

		printf("\n");

		printf("ENTER THE 2nd NUMBER\n");
		scanf("%d",&dnum);

		for(i=31;i>=0;i--)
				printf("%d",((dnum>>i)&1));

		printf("\n");


		printf("ENTER THE SOURCE BIT\n");
		scanf("%d",&sbit);

		printf("ENTER THE DESTINATION BIT\n");
		scanf("%d",&dbit);




		if((snum & (1<<sbit)) !=(dnum & (1<<dbit)))
		{
				snum=snum ^ (1<<sbit);
				dnum=dnum ^ (1<<dbit);
		}


		printf("%d\n",snum);

		for(i=31;i>=0;i--)
				printf("%d",((snum>>i)&1));
		printf("\n");

		printf("%d\n",dnum);

		for(i=31;i>=0;i--)
				printf("%d",((dnum>>i)&1));
		printf("\n");
}
