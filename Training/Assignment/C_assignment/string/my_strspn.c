#include<stdio.h>
int mystrspn(const char *buf,const char *buf1);
int main()
{
		char buf[100],buf1[100];
		int i,d;

		printf("ENTER THE 1st STRING\n");
		fgets(buf,100,stdin);
		for(i=0;buf[i]!='\n';i++);
		buf[i]='\0';

		printf("ENTER THE 2nd STRING\n");
		fgets(buf1,100,stdin);
		for(i=0;buf1[i]!='\n';i++);
		buf1[i]='\0';

		d=mystrspn(buf,buf1);

int p=strspn(buf,buf1);

		printf("%d\n",d);
		printf("%d\n",p);
		return 0;


}

int mystrspn(const char *buf,const char *buf1)
{
		int i,j,cnt=0;


		for(i=0;buf[i];i++)
		{
				for(j=0;buf1[j];j++)
				{
						if(buf[i]==buf1[j])
						cnt++;
					//	else
					//	break;
						
				}
			if(buf[j]=='\0')
			break;
		}
		return cnt;
}


