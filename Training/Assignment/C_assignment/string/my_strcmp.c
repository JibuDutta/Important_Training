#include<stdio.h>
int my_strcmp(const char *str1,const char *str2);
int main()
{
	char str1[100],str2[100];
	int p;

	printf("ENTER THE STRING ONE\n");
	fgets(str1,100,stdin);

	printf("ENTER THE STRING TWO\n");
	fgets(str2,100,stdin);

	p = my_strcmp ( str1 , str2);

	if (p == 0)
		printf("Both are Same\n");
	if (p == 1)
		printf("STRING ONE IS GREATER\n");
	if (p == -1)
		printf("STRING TWO IS GREATER\n");

	return 0;
}
int my_strcmp(const char *str1,const char *str2)
{
	int i;
	for(i=0;str1[i] && str2[i];i++)
	{
		if(str1[i]!=str2[i])
		{
			break;
		}
	}
	if(str1[i]==str2[i])
		return 0;
	if(str1[i]>str2[i])
		return 1;
	if(str1[i]<str2[i])
		return -1;
}
