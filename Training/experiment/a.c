#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	//	int i,j,k,a;
	//	i = j = k =20;
	//	printf("%d",scanf("%d %d%d",&i,&j,&k));
	//	char *ptr = "jiban";
	//		printf("%d\n",sizeof("jiban"));
	//		printf("%d\n",strlen(ptr));
	//	printf("enter ");
	//	scanf("%d",&a);
	//	for(i = 31;i>=0;i--)
	//	{
	//		printf("%d",(a>>i)&1);
	//	}
	//	printf("\n");
	//	 volatile const int a = 8;
	//a = 10;
	//	volatile int* ptr;
	//	if(printf("Jiban\n"))
	//	{
	//	
	//	}


	char *ptr;

	if ((ptr = (char *)malloc(0))==NULL)
	{
		printf("Got a null pointer");

	}

	else {
		puts("Got a valid pointer");

	}



	int a[] = { 0001, 0010, 0100, 01000 };
	int i;
	for ( i = 0 ; i < 4 ; i++)
		printf("%o\t", a[i]);

	return 0;

}
