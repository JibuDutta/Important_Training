#include<stdio.h>
f()
{
	int a[2] = {0};


	a[3] = a[3] + 0x04;
	a[4] =a[0] + 20;

//	printf("%p\n",a[0]);
}

int main(void)
{
	int i=10;
	
	f();	
	
	printf("%d\n",i);
	printf("%d\n",i);
	
return 0;

}
