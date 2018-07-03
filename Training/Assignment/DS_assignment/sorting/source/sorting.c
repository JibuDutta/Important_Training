#include<stdio.h>
#define MAX 5

void selection(int arr[],int n);
void bubble(int arr[],int n);
void insertion ( int arr[], int n);

int main(void)
{
	int i=0;
	int arr[MAX];
	char choice;

	printf("ENTER THE ELEMENT\n");

	for(i=0;i<MAX;i++)
		scanf("%d",&arr[i]);

	printf("ARRAY ELEMNETS ARE BEFORE SORT\n");

	for(i=0;i<MAX;i++)
		printf("%d	",arr[i]);


	while(1)
	{
		printf("\ns:selection\nb:bubble\ni:insertion\nq:quit\n");
		printf("ENTER UR CHOICE\n");
		scanf(" %c",&choice);
		switch(choice)
		{
			case's':selection(arr,MAX);
					break;
			case'i':insertion(arr,MAX);
					break;
			case'b':bubble(arr,MAX);
					break;
			case'q':return;
			default:printf("INVALID CHOICE\n");
		}
	}			
}

void selection(int arr[],int n)
{
	int i;
	int j;
	int temp=0;
	int min;


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
	printf("AFTER SORT THE ARRAY ELEMENTS ARE\n");

	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);//////////////////////print the elements after sorting
	printf("\n");


}
void bubble(int arr[],int n)
{

	int i=0;
	int j=0;
	int temp=0;

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
		printf("%d  ",arr[i]);//////////////////////print the elements after sorting
	printf("\n");

}

void insertion ( int arr[], int n)
{
	int temp=0;
	int i=0;
	int j=0;

	for(i=1 ; i<n ;i++)  ///insertion sorting
	{
		temp = arr[i];
		j = i-1;
		while( j>=0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1]=temp;
	}


	printf("AFTER SORT THE ARRAY ELEMENTS ARE\n");

	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);//////////////////////print the elements after sorting
	printf("\n");

}
