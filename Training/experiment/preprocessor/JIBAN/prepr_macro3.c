#include<stdio.h>
#define SQR(a) (a)*(a)

int main(void)
{
	int a=5;
	
	a = SQR(2+3);
		
	printf("%d\n",a);
	
	return 0;
}
