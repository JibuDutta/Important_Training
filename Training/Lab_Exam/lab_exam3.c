#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define SIZE 100

char* consecuitive (char *);

int main(void)
{
	int i=0;
	char *str = (char*) malloc(SIZE);

	if(str==NULL)
	{
		printf("ERROR\n");
		return;
	}
	
	printf("ENTER THE STRING\n");
	fgets(str,100,stdin);


	for(i=0;str[i]!='\n';i++)
	{
		if(!(((str[i]>=65) && (str[i]<=90)) ||((str[i]>=97) &&(str[i]<=122))))
			{
			printf("INVALID INPUT:\n-->>GIVE ONLY ALPHABETS:\n");
			exit(0);
			}
	}

	consecuitive(str);

	printf("Str:%s",str);

	return 0;
}
/*
void consecuitive(char *ptr)
{
	int i;
	int j;
	
	for(i=0;ptr[i];i++)
	
	{
		for(j=i;ptr[j];j++)
		{

			if((ptr[j]=='A') || (ptr[j]=='E') ||(ptr[j]=='I') ||(ptr[j]=='O') ||(ptr[j]=='U')||
				(ptr[j]=='a')|| (ptr[j]=='e') ||(ptr[j]=='i') ||(ptr[j]=='o') ||(ptr[j]=='u'))
			
			{
				if((ptr[j+1]=='A') || (ptr[j+1]=='E') ||(ptr[j+1]=='I') ||(ptr[j+1]=='O') ||(ptr[j+1]=='U')||
					(ptr[j+1]=='a')|| (ptr[j+1]=='e') ||(ptr[j+1]=='i') ||(ptr[j+1]=='o') ||(ptr[j+1]=='u'))
			
					{	memmove(ptr+j,ptr+j+1,strlen(ptr+j+1)+1); 
						j--;	
					}
			}
		}
	
	}
}	
*/
char* consecuitive(char *ptr)
{
	int i=0;
	int j=0;
	int len=strlen(ptr);

	for(i=0; ptr[i] ; i++)
	
	{

			if((ptr[i]=='A') || (ptr[i]=='E') ||(ptr[i]=='I') ||(ptr[i]=='O') ||(ptr[i]=='U')||
				(ptr[i]=='a')|| (ptr[i]=='e') ||(ptr[i]=='i') ||(ptr[i]=='o') ||(ptr[i]=='u'))
			{
				if((ptr[i]==ptr[i+1]) || ((ptr[i]+32) == ptr[i+1]) || ((ptr[i]-32)==ptr[i+1]))
					{	
						for(j=i; j<len; j++)
							ptr[j]=ptr[j+1];
					
						i--;
						len--;
					}	
			}
	}
	return ptr;
	
}	
