#include<stdio.h>
#define MAX 5
void insertion(int arr[],int n);	/*function prototype*/

int main(void)
{
	int arr[MAX];	/*array  declaration*/
	int i=0;

	printf("Enter The Elements to Sort\n");		/*user input*/
	for(i = 0 ; i<MAX ; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Before Sorting\n");
	for(i = 0 ; i<MAX ;i++)
	{
		printf("%d	",arr[i]);	/*printing the element before sorting*/
	}
	printf("\n");
	
	insertion(arr ,MAX); 	/*insertion funtion call*/
	
	printf("after Sorting\n");
	for(i = 0 ; i<MAX ; i++)
	{
		printf("%d	",arr[i]);	/*printing the elements after  sorting*/
	}
	printf("\n");

	return 0;
}

void insertion(int arr[],int n)	/*function definition*/
{
	int i = 0;	/*variable for cheaking */
	int j = 0 ;
	int temp = 0;
	
	for(i = 1 ; i < n ; i++)	/*outer loop*/
	{
		j = i-1;
		temp = arr[i];	/*taking the 1st element as a key*/
				
		while(j >= 0 && arr[j] > temp )	/*inner loop*/
				{
					arr[j+1] = arr[j];	/*move the element*/
					j = j-1;
				}
		arr[j+1] = temp;
	}
	
			
}


