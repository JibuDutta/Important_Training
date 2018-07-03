#include<stdio.h>
#define int char
#define char float
#define float double

int main(void)
{
	int x = 0;
	char y = 0;
	float z = 0;

	printf("%d	%d	%d\n",sizeof(x),sizeof(y),sizeof(z));

	return 0;
}
