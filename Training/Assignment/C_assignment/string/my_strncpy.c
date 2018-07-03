#include<stdio.h>
char* my_strncpy(char* dest,char* src,int size);
int main()
{
		char src[100];
		char dest[100];
		int	size;

		printf("Enter the Source String\n");
		fgets(src,100,stdin);

		printf("ENTER THE NO OF CHARACTER TO COPY\n");
		scanf("%d",&size);

		my_strncpy(dest,src,size);

		printf("TARGET:%s\n",dest);

		return 0;
}
char* my_strncpy(char* dest,char* src,int size)
{

		int i;

		for(i=0;i<size && src[i];i++)
		{
				dest[i]=src[i];
		}
		for(;i<size;i++)
		{
				dest[i]='\0';
		}
		dest[i]='\0';
	
		return dest;
}
