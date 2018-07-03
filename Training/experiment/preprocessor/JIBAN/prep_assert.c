#include<stdio.h>
#include<assert.h>

int main()
{
	int a = 0;

   	printf("Enter an integer value: ");
  	scanf("%d", &a);

	assert(a >= 10);
	printf("%d\n",a);

	return 0;
}
