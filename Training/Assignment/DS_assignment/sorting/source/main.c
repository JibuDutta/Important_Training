#include"header.h"

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
