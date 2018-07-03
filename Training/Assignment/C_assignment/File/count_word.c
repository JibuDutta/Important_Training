
//Write a program to count number of words in a text file

#include<stdio.h>
a ;
float a ;

//char a;
int main(int argc,char *argv[])
{
	FILE *fp;
	int word=0;
	char str[20];

	if(argc!=2)
	{
		printf("INVALID NO OF ARGUMENTS\n");
		return;
	}

	fp=fopen(argv[1],"r");

	if(fp==NULL)
	{
		printf("ERROR\n");
		return;
	}
	//////////////////////////////////////////////////word find in a given file
	while(fscanf(fp,"%s",str)!=EOF)
		word ++;

	printf("NO OF WORD IN THE FILE IS:%d\n\n",word);

	fclose(fp);

} 
