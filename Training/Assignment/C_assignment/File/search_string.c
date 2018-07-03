/*write a program to search for a given string in a file and print the line where the
string is found along with the line number.*/


#include<stdio.h>
#include<string.h>

int main(int argc,char **argv)
{
	FILE *fp = NULL;
	char buf[100] = {"0"};
	int cnt=0;

	if(argc!=3)
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

	while(fgets(buf,100,fp))
		{
			cnt++;
				if(strstr(buf,argv[2]))
				{
					printf("LINE NO=%d:",cnt);	
					printf("%s\n",buf);
				}
		}
	fclose(fp);
}
