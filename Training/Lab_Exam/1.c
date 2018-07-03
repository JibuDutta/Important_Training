#include<stdio.h>
int main(int argc,char **argv)
{
	int a;
	int b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("The area of the rectangle is %d\n",a*b);


	return 0;
}
