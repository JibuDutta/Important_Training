#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *a;

	a = (char*)malloc(10);
	int i = 0;
	for (i = 0; i<80000 ;i++ )
		a[i]=i;

	return 0;
}
