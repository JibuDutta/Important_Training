#include<stdio.h>
unsigned int littletobig(unsigned int data)
{
	int a = 1;
	int r1 = 0;
	int *ptr = &a;
	unsigned int x,y,z,w;
	if(*(char*)ptr == 1)
	{
		printf("Little\n");
		r1 = (data << 24) | (data >> 24 )  | (((data & ~(255)) & ~(255<<16))<<8) | (((data & ~(255<<8)) & ~(255<<24))>>8) ;

	}
	return r1;
}

int main(void)
{
	unsigned int num;
	printf("ENter the no\n");
	scanf("%d",&num);

	int i;
	
	for(i=31;i>=0;i--)
		printf("%d",(num >> i)&1);
	printf("\n");

	num = littletobig(num);

	printf("%d\n",num);

	for(i=31;i>=0;i--)
		printf("%d",(num >> i)&1);
	printf("\n");

	return 0;	
}
