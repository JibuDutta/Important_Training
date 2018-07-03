#include<stdio.h>
int add(int x, int y);
int main(void)
{
	int (*ptr_fun)(int ,int);
	
	int r1, r2;

	ptr_fun = add;
 	
	r1 = ptr_fun(10,20);
	
	printf("%d\n",r1);
	
	return 0;

}

int add(int x, int y)
{
	return x + y;
}
