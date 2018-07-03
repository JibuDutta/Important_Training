#include<stdio.h>

void fun()
{
	int	arr[2] = {20,0};
	arr[1] = arr[1] + 8;
//	arr[1] = arr[0];
}
int main()
{
	int a = 10;

	
	fun();
	printf("The value of a is = %d \n", a);
	printf("The value of a is = %d \n", a);
	return 0;

}
