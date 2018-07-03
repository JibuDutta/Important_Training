#include<stdio.h>
#include<stdlib.h>
int a = 5 ;
static int b = 9;
int main(void)
{
	int var = 100;
	
	int *ptr = (int *)malloc(sizeof(int));
	
	ptr = & var;
	
	printf("value is = %d\n", *ptr);
	printf("pid = %d\n",getpid());
	getchar();

	return 0;
}
