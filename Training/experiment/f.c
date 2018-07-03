#include<stdio.h>
void f(void)
{
	static int i;
	i++;
	printf("i = %d\n",i);
	f();

}
int main(void)
{
	f();
	return 0;

}
