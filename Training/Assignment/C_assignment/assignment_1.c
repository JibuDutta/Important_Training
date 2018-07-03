#include<stdio.h>
#include<string.h>
int main(int argc,char **argv)
{
	FILE *fp;
	char ch[100];
	int i;
	if(argc!=2)
	{
		printf("INVALID NO OF ARGUMENTS\n");
		return;
	}

	for(i=1;i<argc;i++)
	{
		fp=fopen(argv[i],"r");
		while(fgets(ch,100,fp))
		{
			printf("%s",ch);
		}
		fclose(fp);
	}
	return 0;
}
