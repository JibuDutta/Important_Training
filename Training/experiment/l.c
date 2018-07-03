#include<stdio.h>
int main()
{	
	int a;
	int month[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&a);
	if(((a%4 == 0) && (a%100 !=0)) || (a%400 == 0))
//	printf("LeapYear");	
	{
		month[1] = 29;
		printf("%d",month[1]);
	}
	return 0;
}
