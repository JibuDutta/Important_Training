#include<stdio.h>
int main()
{	
	int var = 10;
	int *const ptr = &var;
	printf("*ptr = %d\n",*ptr);
	*ptr = 11;

	//*ptr = 22;	illegel for const int *ptr
	//but ptr++ is valid;

	//*ptr = 22;   is legel for int *const ptr
	//but ptr++ is not valid


	printf("*ptr = %d\n",*ptr);

	return 0;
}
