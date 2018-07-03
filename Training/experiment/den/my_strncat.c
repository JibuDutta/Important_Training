#include<stdio.h>
#include<stdlib.h>
#define MAX 200
char* my_strncat(char* tar,const char* src,int size);
int main(void)
{
		char *src = (char*) malloc(MAX);
		char *tar = (char*) malloc(MAX);
		int size=0;
		int i = 0;

		printf("ENTER THE 1st STRING\n");
		fgets(tar,MAX,stdin);
		printf("ENTER THE 2nd STRING\n");
		fgets(src,MAX,stdin);
		printf("ENTER THE NO OF CHARACTER U WANT TO CONCATENATE\n");
		scanf("%d",&size);

		my_strncat(tar,src,size);

		printf("AFTER CONCATENATE:%s\n",tar);


		return 0;
}
char* my_strncat(char* tar,const char* src,int size)
{
		int i=0;
		int j=0;

		for(i=0;tar[i]!='\n';i++);

		for(j=0;j<size && *(src+j);j++)
		{
				*(tar+i+j) = *(src+j);
		}
		*(tar+i+j)='\0';

}
