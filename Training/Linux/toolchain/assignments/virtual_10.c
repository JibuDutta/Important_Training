#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	char ch;
	char str[100] = {0};
	int pid = getpid();
	FILE *fp = NULL;
	
	sprintf(str,"/proc/%d/maps",pid);

	fp = fopen(str,"r");

	if(fp == NULL){
		perror("fopen");
		exit(0);
	}

	while(fscanf(fp,"%s",str)!=EOF) {
			sscanf(str,"%x%c%x",&num1,&ch,&num2);
			sum = sum + (num2 - num1);
			printf("num1 = %x num2 = %x sum = %x\n",num1,num2,sum);
			while(fgetc(fp) !='\n');
		}

	printf("total no is used %d\n",sum);

	fclose(fp);	
	return 0;
}
