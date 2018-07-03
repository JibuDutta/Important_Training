#include<stdio.h>
#include<string.h>

int my_strcmp(const char *str1,const char *str2);

int main()
{
	char str1[100];
	char str2[100];
	int p,i;

	printf("ENTER THE STRING ONE\n");
	fgets(str1,100,stdin);

	for(i=0;str1[i]!='\n';i++);
	str1[i]='\0';


	printf("ENTER THE STRING TWO\n");
	fgets(str2,100,stdin);
	for(i=0;str2[i]!='\n';i++);
	str2[i]='\0';


	p=my_strcasecmp(str1,str2);

	if(p==0)
		printf("Both are Same\n");
	if(p==1)
		printf("STRING ONE IS GREATER\n");
	if(p==-1)
		printf("STRING TWO IS GREATER\n");

	return 0;
}
int my_strcasecmp(const char *str1,const char *str2)
{
	int i;
	for(i=0;str1[i] && str2[i];i++)
	{
		if((str1[i]!=str2[i]) || (str1[i]!=(str2[i]-32)) || ((str1[i]-32)!=str2[i]))
		{
			break;
		}
	}

	if(strlen(str1) == strlen(str2) && ((str1[i]==str2[i]) || (str1[i]==(str2[i]-32)) || ((str1[i]-32)==str2[i])))
		return 0;

	else if(str1[i]>str2[i])
		return str1[i]-str2[i];

	else if(str1[i]<str2[i])
		return str1[i]-str2[i];
}
