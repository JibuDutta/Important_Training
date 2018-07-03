#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 256

int main(int argc,char **argv)
{
	FILE *fp = NULL;
	int i = 0;
	int n = 0;
	int nline=0;
	char str[MAX];
	
	if(argc != 3)
	{
		printf("GIVE PROPER INPUT\n");
		exit(0);
	}	

	fp = fopen(argv[1],"r");

	if(fp == NULL)
		{
			perror("fopen");
			exit(0);
		}
	
	n = atoi(argv[2]);

	while(fgets(str , MAX ,fp) != NULL)
		nline++;

	rewind(fp);

	if(nline < n)
	{
		
		while(fgets(str , MAX ,fp) != NULL){
			str[strlen(str)-1] ='\0';
			puts(str);
		}
	}
	else
	{
	while(fgets(str , MAX ,fp) != NULL)
		{
		if(i++ >= ( nline - n) )
			{
				str[strlen(str)-1] ='\0';
				puts(str);
			}	
		}
	}

}
