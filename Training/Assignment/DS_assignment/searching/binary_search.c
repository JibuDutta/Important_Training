#include<stdio.h>
#define MAX 5 

int main(void)
{
	int arr[MAX];
	int i = 0;
	int key = 0;
	int low = 0;
	int high = MAX;
	int mid = 0;
	int flag = 0;
	
	printf("ENTER THE ARRAY ELEMENTS\n");///////enter the elements
	
	for(i = 0 ; i < MAX ; i++)
		scanf("%d",&arr[i]);///////scan the element
	
	printf("ARRAY ELEMENTS ARE:\n");
	
	for ( i = 0 ; i<MAX ; i++)
		printf("%d	",arr[i]);/////print the value
	printf("\n");

	printf("ENTER A VALUE TO SEARCH\n");/// value to search
	scanf("%d",&key);


//////////////////////////////////////////////////////////////////////binary search
	for( i = low ; low < high ; i++)
	//while(low < high)
	{

	mid = (high + low)/2;  
	 
	if ( arr[mid] == key)
			{
				flag = 1;
				break;
			}
	
	else if ( key < arr[mid])
		{
			high = mid - 1 ;
		}
	else if ( key > arr[mid])
		{
			low = mid + 1;
		}
			
	}		
			if ( flag == 1)
				printf("FOUND THE DATA %d at POSITION %d\n",key,mid+1);
			else
				printf("THE DATA %d IS NOT FOUND\n",key);
	
	return 0;
}
