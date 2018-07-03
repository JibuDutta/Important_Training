#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 100
int main() {

	char *str = (char*)malloc(SIZE *sizeof(char));
	int num;
	int i = 0;
	printf("enter no\n");
	scanf("%d",&num);

	for(i = 0;i<num; i++ )
	{
		char *ptr = (char*)malloc(SIZE *sizeof(char));   

		if(ptr == NULL)
		{
			perror("malloc");
			exit(0);
		}

		printf("Enter string\n");
		fgets(ptr,SIZE,stdin);
//		gets(ptr);
		strcpy(str,ptr);

		char temp;
		int j = 0;
		int l = 0;
		int count = 0;
		int k = strlen(str)-1;
		for(j = 0;j<k ;j++,k--)
		{
			temp = str[j];
			str[j]= str[k];
			str[k]= temp;
		}

		printf("%s\n",str);
		for(l = 0;str[l];l++)
		{
			if(str[l+1]-str[l] == ptr[l+1]- ptr[l])
				count++;
		}
		if(count == strlen(ptr)-1)
			printf("Funny\n");
		else
			printf("Not Funny\n");
	}


	/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
	return 0;
}
