#include<stdio.h>
#define max(a,b,c) (a > b ? (a > c ? a : c) : (b > c ? b : c))



int main(void)	
{
	int a,b,c;
	int big = 0;
	printf("Enter the three No:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("max = %d\n",max(a,b,c));
	return 0;	
}
