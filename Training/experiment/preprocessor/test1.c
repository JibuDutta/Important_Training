#include<stdio.h>

void f2();

void f1()
{
	printf("Before main\n");
}
 virat()
{
	f1();
	printf("in main\n");	
	f2();
}

void f2()
{
	printf("After main\n");	

}
