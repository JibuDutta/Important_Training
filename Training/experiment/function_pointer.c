#include<stdio.h>
//void add(int);
//void sub(int);

int mul(int,int);
int div(int,int);

int main()
{


//	int (*fun_ptr1[])(int) = {add, sub, mul , div};
	int (*fun_ptr1[2])(int,int) = {mul , div};


	printf("Multiplication is = %d\n",mul(10,20));
	printf("Division is = %d\n",div(100,5));

	return 0;
}

void add(int a, int b)
{
	printf("Addition is: %d\n",a+b);


}
void sub(int a, int b)
{
	printf("Substraction is: %d\n",a-b);
}

int mul(int a,int b)
{

	return a*b;
}

int div(int a,int b)
{
	return (a/b);
}
