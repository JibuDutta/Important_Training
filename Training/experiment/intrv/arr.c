#include<stdio.h>
int main(void)
{
	int a[3][4] = { 11,22,33,44,55,66,77,88,99,111,122,133};

	printf("%u\n",a);
	printf("%u\n",a+1);
	printf("%u\n",&a);
	printf("%u\n",&a+1);
	printf("%u\n",a[0]+1);
	
/*	printf("%p\n",a[1]);
	printf("%d\n",a[1][1]);

	printf("\n%p	%p %d\n\n",a+1,a[1]+1,a[1][1]+1);
//	*///return 0;

	printf("%d\n",1%4);

}
