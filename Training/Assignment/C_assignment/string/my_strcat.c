#include<stdio.h>
char* my_strcat(char* dest,char *src);
int main()
{
		char str1[100];
		char str2[100];
		int i = 0;
		printf("ENTER THE 1ST STRING\n ");
		fgets(str1,100,stdin);

		for(i=0;str1[i];i++);
		str1[i-1] = '\0';


		printf("ENTER THE 2nd STRING\n ");
		fgets(str2,100,stdin);

		my_strcat(str1,str2);

		printf("AFTER STRING CONCATENATE:%s\n",str1);


		return 0;
}
char* my_strcat(char* dest,char *src)
{
		int i,j;

		for(i=0;dest[i];i++);
		printf("%d\n",i);
//		i=i-1;	
	
		for(j=0;src[j];j++)
		{
				dest[i+j]=src[j];
		}

		dest[i+j]='\0';


		return dest;
}




