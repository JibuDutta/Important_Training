#include<stdio.h>
char* my_strncat(char* tar,char* src,int size);
int main()
{
		char src[100];
		char tar[100];
		int size;

		printf("ENTER THE 1st STRING\n");
		scanf("%[^\n]",tar);

		printf("ENTER THE 2nd STRING\n");
		scanf(" %[^\n]",src);

		printf("ENTER THE NO OF CHARACTER U WANT TO CONCATENATE\n");
		scanf("%d",&size);

		my_strncat(tar,src,size);

		printf("AFTER CONCATENATE:%s\n",tar);


		return 0;
}
char* my_strncat(char* tar,char* src,int size)
{
		int i,j;
		for(i=0;tar[i];i++);

		for(j=0;j<size && src[j];j++)
		{
				tar[i+j]=src[j];
		}
		tar[i+j]='\0';

}
