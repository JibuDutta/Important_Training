#include<stdio.h>

//#define 

int main()
{
	printf("%d\n",-32>>1);
	printf("%d\n",-31>>1);
	printf("%d\n",-33>>1);


	/*		int num,pos,i,j;

			printf("ENTER THE NO\n");
			scanf("%d",&num);

	//printf("ENTER THE POSITION\n");
	//	scanf("%d",&pos);

	for(i=31;i>=0;i--)
	printf("%d",(num>>i)&1);

	printf("\n");

	//		num=(num | (1<<pos));

	//		num=(num & (~(1<<pos)));

	//		num=(num ^(1<<pos));

	for(i=0,j=31;i<j;i++,j--)
	{
	if((num & (1<<i)) !=(num & (1<<j)))
	{
	num=num^(1<<i);
	num=num^(1<<j);
	}

	}



	printf("%d\n",num);

	for(i=31;i>=0;i--)
	printf("%d",(num>>i)&1);

	printf("\n");
	 */
	return 0;
}
