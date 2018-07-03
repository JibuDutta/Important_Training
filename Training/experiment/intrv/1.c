#include<stdio.h>
//int a;

#if 0
int main()
{

	int a = 10;
	printf("%d\n",a);	
	int a = 10;
	printf("%d\n",a);	
	//	return 0;
}
int a ;

#endif

int main(void)
{
	int i, num;
	printf("Enter No\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)

		printf("%d",(num >>i)&1);
	printf("\n");

	num = (num<<24) |(num >>24) | (((num & (~(255)) & ~(255<<16))<<8)) | ((num & (~(255<<24 )) & (~(255<<8)))>>8);

	for(i=31;i>=0;i--)
		printf("%d",(num >>i)&1);
	printf("\n");

	return 0;
}
