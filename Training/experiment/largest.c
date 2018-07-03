#include<stdio.h>
#define MAX 5
int main()
{

	int arr[MAX];
	int i = 0;
	int max = -99999999;
	int max2 = -99999999;
	//int max = 0;
	//int max2 = 0;


	printf("Enter the elements:\n");
	for(i = 0; i < MAX ;i++ )
	{
		scanf("%d",&arr[i]);
	}
	printf("The Elements are:\n");
	for(i = 0; i < MAX ;i++ )
		printf("%d	",arr[i]);
	printf("\n");
	
	for(i = 0; i < MAX ;i++ )
	{
		if(arr[i] > max)
			max = arr[i];
	}

	for(i = 0; i < MAX ;i++ )
	{
		if(arr[i] > max2 && arr[i] != max)
		{
			max2 = arr[i];
		}
	}

	printf("Max = %d\n",max);	
	printf("Max2 = %d\n",max2);	
	return 0;

}
