
/*Write a program change all upper case to lower case in a given text file*/


#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
		FILE *fp;
		char ch;
		int i,cnt=0;
		char *buf;

		if(argc != 2)
		{
				printf("INVALID TYPE OF ARGUMENTS\n");
				return;
		}

		fp=fopen(argv[1],"r");

		if(fp==NULL)
		{
				printf("ERROR 1\n");
				return;
		}
		
		while(ch=(fgetc(fp)!=EOF))
				cnt++;
		fclose(fp);
///////////////////////////////////////////////////copy to buf
		fp=fopen(argv[1],"r");
		buf=calloc(1,cnt+1);

		for(i=0;i<cnt;i++)
		{
				buf[i]=fgetc(fp);
		}
////////////////////////////////////////////////////operation
		for(i=0;i<cnt;i++)
		{
				if(buf[i]>=65 && buf[i]<=90)
						buf[i]=buf[i]+32;
		}
		fclose(fp);

////////////////////////////////////////////////////write into file
		fp=fopen(argv[1],"w");


		for(i=0;i<cnt;i++)
				fputc(buf[i],fp);

		fclose(fp);


		return 0;

}
