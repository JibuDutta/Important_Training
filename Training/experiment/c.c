#include<stdio.h>
int main()
{
int register d;
int volatile const data;
int num = 0 ;

	char a[][5]= {"even","odd"};
	//char a[2]= {'e','o'};
	

	printf("enter the no\n");
	scanf("%d",&num);

	printf("%s\n",a[num%2]);

	return 0;
}
