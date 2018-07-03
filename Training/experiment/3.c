#include<stdio.h>
#include<stdlib.h>
#if 0
int simpleArraySum(int n, int *arr) {
	    int i,sum = 0;
		for(i = 0; i < n; i++)
			sum = sum + arr[i];
		return sum;

			// Return the sum of all array elements  
}

int main()
{
	int i,n,sum;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
		for(i = 0; i < n; i++)
			scanf("%d",&arr[i]);

	sum  = simpleArraySum(n,arr);
	printf("%d\n",sum);
	return 0;
}
#endif


int main()
{	

	int num;
	int i;
	scanf("%d",&num);
	for(i = 31; i>=0; i--)
	{
		printf("%d",((num >> i) & 1));
		if(i%8 == 0)
			printf(" ");
	}
	printf("\n");

	num = num & 0xAAAAAAAA;
	
	for(i = 31; i>=0; i--)
	{
		printf("%d",((num >> i) & 1));
		if(i%8 == 0)
			printf(" ");
	}

	return 0;
}
