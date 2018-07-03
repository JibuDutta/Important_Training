#include<stdio.h>
#define MAX 1024

int a[3] = { 11,22,33};

int main()
{
	printf("ADDRESS OF a = 0x%08x\n",a);
	printf("ADDRESS OF a + %d = 0x%08x\n",MAX,a+MAX);
	a[MAX] = 5;
	printf("value of a[%d] = %d\n",MAX,a[MAX]);

	return 0;
}
