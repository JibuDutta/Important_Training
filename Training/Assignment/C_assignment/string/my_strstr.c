#include<stdio.h>
#include<string.h>
char* my_strstr(const char *str1,const char *str2);
int main()
{
	char str1[100],str2[100];
	char *temp;
	int i = 0;	

	printf("Enter The 1st String\n");
	fgets(str1,100,stdin);
	for(i=0;str1[i]!='\n';i++);
	str1[i]='\0';


	printf("Enter The 2nd String\n");
	fgets(str2,100,stdin);
	for(i=0;str2[i]!='\n';i++);
	str2[i]='\0';


	if (my_strstr(str1,str2))

		printf("String is Present\n");
	else
		printf("String is not Present\n");


	return 0;
}
char* my_strstr(const char *str1,const char *str2)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for(i = 0 ; str1[i] ; i++)
	{
		k = i;
		j = 0;
		while( (str1[k] == str2[j] ) &&(str2[j]!='\0') &&(str1[k]!='\0'))
		{
			k++;
			j++;
		}

		if(j ==strlen(str2))
		{
			return (char*)str2;
		}
	}
	return NULL;		
}

