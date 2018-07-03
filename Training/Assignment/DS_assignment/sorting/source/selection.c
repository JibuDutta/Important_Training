#include"header.h"
void selection(int arr[],int n)
{

	int i=0;
	int j=0;
	int temp=0;
	int min=0;

//////////////////////////////////////////////////SELECTION SORTING
	for(i=0 ; i<n-1; i++)
	{
		min=i;
	
		for(j=i+1; j<n ; j++)
			{
				if(arr[min]>arr[j])
					{
						min=j;
					}
			}
		if(min!=i)
		{
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}

///////////////////////////////////////////


	printf("AFTER SORT THE ARRAY ELEMENTS ARE\n");

	for(i=0;i<n;i++)
		printf("%d	",arr[i]);//////////////////////print the elements after sorting
	printf("\n");

}
