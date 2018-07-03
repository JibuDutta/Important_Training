#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("BAL","w");
	
	char *str = "Jiban";
	int age = 111;
	fprintf(fp,"name is %s and  %d :",str,age);

}
