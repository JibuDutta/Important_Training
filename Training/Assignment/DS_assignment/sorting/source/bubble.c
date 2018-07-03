#include"header.h"
void bubble(int arr[],int n)
{

	int i=0;
	int j=0;
	int temp=0;
	int min=0;
//////////////////////////////////////////////////BUBBLE SORTING
	for(i=0;i<n-1;i++)
		{
		for(j=0;j<n-i-1;j++)
			{
			if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
///////////////////////////////////////////

	printf("AFTER SORT THE ARRAY ELEMENTS ARE\n");

	for(i=0;i<n;i++)
		printf("%d	",arr[i]);//////////////////////print the elements after sorting
	printf("\n");
	
}
