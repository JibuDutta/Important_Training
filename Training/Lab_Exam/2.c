#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
int sum(int num)
{
	int digit,add=0;
	
	if(num!=0){	
		return add + (num%10) + sum(num/10);
	}
	else
		return 0;
}

int main()
{
	int num = 0;
	
	printf("enter the Number\n");
	scanf("%d",&num);
/*	
	int sum=0, data;
	while(num){
		data = num %10;
		sum = sum + data;
		num =num/10;
	}
*/
	printf("The Sum of the Digit is %d\n",sum(num));

	return 0;
}
#endif

#if 0
int mystrcmp(char *str1,char *str2)
{
	int i = 0;

	for(i=0;str1[i] && str2[i];i++)
	{
		if(str1[i]!=str2[i])
			break;
	}
	if (str1[i] > str2[i])
		return 1;
	if (str1[i] < str2[i])
		return -1;
	if(str1[i]==str2[i]) 
		return 0;



}
int main()
{
	char str1[100],str2[100];
	int i;

	printf("enter the string1\n");
	fgets(str1,100,stdin);

	printf("enter the string2\n");
	fgets(str2,100,stdin);

	i = mystrcmp(str1,str2);
	
	if(i==0)
		printf("Both String Are Same\n");	
	
	if(i==1)
		printf("String1 is greater than string 2:\n")	;

	if (i==-1)
		printf("String2 is greater than string 1:\n")	;

return 0;
}
#endif

#if 1
int main(int argc, char ** argv)
{
	if(argc !=3)
	{
		printf("Invalid Arguments\n");
		printf("./a.out <length> <breadth>\n");
		return 0;
	}
	int a;
	int b;
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("The Area Of the Rectangle is : %d \n", a*b);

	return 0;
}

#endif

