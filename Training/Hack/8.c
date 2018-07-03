#include<stdio.h>
int main(void)
{
	int i = 0 ;
	int j = 0 ;
	int k = 0;

	int n;
	printf("Enter the no of line\n");
	scanf("%d",&n);

	for(i = 0; i<n; i++ )
	{
	
		for(j = n ;j >i ;j-- )
		{
			printf(" ");
		}

		for(k=0; k<=i; k++) {
		
			printf("#");
		}
		
		printf("\n");
	}
}
