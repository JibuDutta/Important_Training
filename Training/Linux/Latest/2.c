#include<stdio.h>
#include<limits.h>
int main(void)
{

 /*   printf("%d\n",USHRT_MAX);
 *	printf("%d\n",SCHAR_MAX);
 *	printf("%d\n",UCHAR_MAX);
 *	printf("%d\n",CHAR_MAX);
 *
 */
 int i,j,n;
 scanf("%d",&n);

 for( i = 1;i <= n;i++,printf("\n"))
 {
	 for(j = 1;j <= i ;j++)
	 {
		printf("%d",j)	; 
	 }
 
 }
	return 0; 
 }
