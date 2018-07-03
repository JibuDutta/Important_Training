#include<stdio.h>

int bit_swap (int n, int s, int d);

int main()
{
		int num;
		int sbit;
		int dbit;
		int i;

		printf("ENTER THE NUMBER\n");
		scanf("%d",&num);

		for(i=31;i>=0;i--)
				printf("%d",((num>>i)&1));

		printf("\n");

		printf("ENTER THE SOURCE BIT\n");
		scanf("%d",&sbit);

		printf("ENTER THE DESTINATION BIT\n");
		scanf("%d",&dbit);

		num=bit_swap (num,sbit,dbit);
		printf("%d\n",num);

		for(i=31;i>=0;i--)
				printf("%d",((num>>i)&1));


		printf("\n");

		return 0;
}

int bit_swap (int n, int s, int d)

{

		if((n & (1<<s)) !=(n & (1<<d)))
		{
				n=n ^ (1<<s);
				n=n ^ (1<<d);
		}

		return n;

}
