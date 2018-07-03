#include<stdio.h>
#include<string.h>
char *remsstr(char *str, const char *sstr);

int main()
{
		char str[100],sstr[100];
		int d,i;
		printf("ENTER THE 1st STRING\n");
		fgets(str,100,stdin);
		for(i=0;str[i]!='\n';i++);
		str[i]='\0';

		//		gets(str);


		printf("ENTER THE 2nd STRING\n");
		fgets(sstr,100,stdin);
		for(i=0;str[i]!='\n';i++);
		str[i]='\0';

		//		gets(sstr);

		//d=strlen(sstr);
		//printf("%d\n",d);

		remsstr(str,sstr);

		printf("STRING:%s\n",str);


		return 0;
}

char *remsstr(char *str,const char *sstr)
{

		//		int i;
		char *ptr;
		ptr=str;
		//	for(i=0;str[i];i++)
		//	{
		//ptr=str;
		while(ptr=strstr(ptr,sstr))
		{
				printf("found %d\n",ptr-str);
				//int d=strlen(sstr)-1;
				memmove(ptr,ptr+strlen(sstr),strlen(ptr+strlen(sstr))+1);
				//		  	memmove(ptr,ptr+d,strlen(ptr+d)+1);
				ptr++;
				//printf("STRING:");
				//			ptr=ptr+strlen(sstr);
				//		printf("%d",ptr-str);	
		}
		return ;


		/*		for(ptr=str;ptr=strstr(ptr,sstr);)
				{
				memmove(ptr,ptr+strlen(sstr),strlen(ptr+strlen(sstr)));
		//			    ptr++;

		ptr=ptr+strlen(sstr);
		}
		return;
		 */	



}

