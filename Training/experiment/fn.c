#include<stdio.h>
void add(int , int);
void sub(int , int);

void mul(int,int);
void div(int,int);

int main()
{
	void (*fun_ptr[3])(int,int);

	fun_ptr[0] = add;
	fun_ptr[1] = sub;
	fun_ptr[2] = mul;
	fun_ptr[3] = div;
	fun_ptr[0](10,40);
	fun_ptr[1](50,40);
	fun_ptr[2](50,40);
	fun_ptr[3](50,2);



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

void mul(int a,int b)
{

	printf("Multiplication is: %d\n",a*b);
}

void div(int a,int b)
{
	printf("Division is: %d\n",a/b);
	
}
