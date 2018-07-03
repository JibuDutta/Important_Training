#include<stdio.h>
#define max(num1,num2) ((1<<31) & (num1 - num2)) ? printf("Number2 is greater %d\n",num2) :  printf("Number1 is greater:%d\n",num1)
int main(void)
{
	int num1,num2;
	printf("Enter the two No:");

	scanf("%d %d",&num1,&num2);
	max(num1,num2);
	
	return 0;
}
