#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1024
void consecutive(char *ptr);
int main()
{
	char *ptr = (char*)malloc(sizeof(char)*MAX);

	int i=0;

	int  j = 0;

	printf("Enter the string :");
	fgets(ptr,MAX,stdin);

	for(i = 0 ;ptr[i] != '\n';i++);
	ptr[i] ='\0';

	consecutive(ptr);
	/*	while(*ptr++)
		{
		for(j = 0; ptr[j] ; j++)
		if(i==j)	
		}
	 */
	printf("%s\n",ptr);

	return 0;
}

void consecutive(char *ptr)
{
	int i ,j;

	for(i = 0 ; ptr[i]; i++)
	{
		for(j = 0; ptr[j]; j++)
		{	if(i == j)
				continue;
	
				if(ptr[i] == ptr[j])
				{
					memmove(ptr+j,ptr+j+1,strlen(ptr+j+1)+1);
					j--;
				}
		}	
	}
}
