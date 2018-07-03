#include<stdio.h>
#include<string.h>
/*void f_rev(char *str, int j)
{
	char temp;
	static int i = 0;
		if(i<j)
		{
			temp=str[j];
			str[j]=str[i];
			str[i]=temp;
			i++;
			j--;
			f_rev(str,j);
		}
		printf("str %s\n",str);
}*/
void test(char *str)
{
 	int i;
	int j;
	for (i=0; str[i];)
	{
		str[i]= str[i];
		i= i+2;}
	printf("%s\n",str);

}
int main(void)
{
 	char str[100];
	printf("Enter string\n");
	fgets(str,100,stdin);
//	f_rev(str,j++);
  	test(str);
	return 0;
}
