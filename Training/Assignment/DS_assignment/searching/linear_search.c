#include<stdio.h>
#define MAX 5 

int main(void)
{
	int arr[MAX];
	int i = 0;
	int data = 0;
	
	printf("ENTER THE ARRAY ELEMENTS\n");///////enter the elements
	
	for(i = 0 ; i < MAX ; i++)
		scanf("%d",&arr[i]);///////scan the element
	
	printf("ARRAY ELEMENTS ARE:\n");
	
	for(i = 0 ; i < MAX ; i++)
		printf("%d	",arr[i]);/////print the value
	printf("\n");

	printf("ENTER A VALUE TO SEARCH\n");/// value to search
	scanf("%d",&data);

	for(i = 0 ; i < MAX ; i++) {
		if (arr[i] == data) {
		printf("THE DATA %d is FOUND in %d position\n",data,i+1);////position where data is found
		break;
		}
	}
	
	if(i == MAX) {
		printf("THE DATA IS NOT FOUND IN THE ARRAY\n");////if data not found
			
	}
	
	return 0;
}
