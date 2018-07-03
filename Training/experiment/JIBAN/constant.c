#include<stdio.h>
const int var=10;
int main()
{
	int *ptr = &var;
	(*ptr) = 15;
	printf("var = %d\n",var);
	return 0;

}
