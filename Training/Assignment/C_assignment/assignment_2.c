/*WAP to implement copy command*/
			
#include<stdio.h>
int main(int argc,char **argv)
{
	FILE *src,*tar;
	char ch;
	
	if(argc!=3)
	{
		printf("INVALID NO OF ARGUMENTS");
		return;
	}
	
	src=fopen(argv[1],"r");
	
	if(src==NULL)
	{
		printf("Error");
		return;
	}
	
	tar=fopen(argv[2],"w");
	
	if(tar==NULL)
	{
		printf("Error");
		return;
	}
	
	while((ch=fgetc(src))!=EOF)
	{
	fputc(ch,tar);
	}
	
	fclose(src);
	fclose(tar);
	
	return 0;
}
