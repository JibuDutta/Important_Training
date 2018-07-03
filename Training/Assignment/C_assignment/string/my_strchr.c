#include<stdio.h>
char * chr_add_instr (const char *buf, int c);
int main()
{
	char strbuf[100];
	char ch;
	char *temp=NULL;

	printf("ENTER THE STRING\n");
	fgets(strbuf,100,stdin);

	printf("ENTER THE CHARACTER\n");
	scanf("%c",&ch);
	temp=chr_add_instr (strbuf,ch);

	if (temp)
		printf("character is found at %d\n",temp-strbuf);
	else
		printf("character is not found\n");


	return 0;

}
char * chr_add_instr (const char *buf, int c)
{
	int i;
	for(i=0;buf[i];i++)
	{

		if(buf[i] == c)
			return (char*) buf+i;
	}

	return 0;
}
