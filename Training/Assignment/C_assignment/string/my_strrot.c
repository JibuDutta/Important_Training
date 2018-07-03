#include<stdio.h>
#include<string.h>
int strrot(char *str, char *rstr);

int main()
{
		char str[100];
		char rstr[100];
		int a,i;

		printf("ENTER THE 1st STRING\n");
		fgets(str,100,stdin);

		for(i=0;str[i]!='\n';i++);
		str[i]='\0';

		printf("ENTER THE 2nd STRING\n");
		fgets(rstr,100,stdin);

		for(i=0;str[i]!='\n';i++);
		str[i]='\0';

		a=strrot(str,rstr);

		if(a)
				printf("BOTH ARE SAME\n");
		else
				printf("Both are NOT Equal\n");


		return 0;
}

int strrot(char *str, char *rstr)
{
		//printf("%s\n",str);
		//printf("%s\n",rstr);
		char temp;
		int i,cnt=0;
		int d=strlen(str);

A:	temp=str[0];


	for(i=0;str[i];i++)
	{
			str[i]=str[i+1];
		//	printf("%s\n",str);
	}
	i=i-1;
	str[i]=temp;
	str[i+1]='\0';

	cnt++;
	printf("%s\n",str);

	//	int d=strlen(rstr)-1;
	//printf("%d",d);
	//	rstr[d]='\0';
	//	printf("%s\n",rstr);

	if((strcmp(str,rstr))==0)
			return 1; 
	//printf("Both are NOT Equal\n");
	else if (cnt!=d)
			goto A;
	return 0;

	//printf("Both are Equal\n");

	//		printf("%s\n",str);




}
