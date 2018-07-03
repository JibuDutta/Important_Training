#include<stdio.h>
#include<string.h>
int main(int argc,char **argv)
{
	FILE *fp;
	char buf[100];
	int i;
	//fp=fopen(argc[i],"r");
	for(i=1;i<argc;i++)
	{
		fp=fopen(argv[i],"r");
		while(fgets(buf,100,fp)!=NULL)
		{
			printf("%s",buf);
		}
	fclose(fp);
	}
	//fclose(fp);
	return 0;
}
