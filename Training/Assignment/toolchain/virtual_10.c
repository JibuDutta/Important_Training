#include <stdio.h>
#include<unistd.h>

int cal_hexint(char *str);

int cal_virtual(char *str);

int main(void)
{

	FILE *fp=NULL;
	char str[100];
	char ch[20];
	int vas = 0;

	sprintf(ch,"%s%d%s","/proc/", getpid() ,"/maps");
	
	fp = fopen (ch,"r");

	if(fp==NULL)
	{
		perror("fopen");
		return 0;
	}
	
	while(fgets(str,100,fp) != NULL){
	 	vas = vas + cal_virtual(str) ;
		}

	printf("virtual space used by process %d is %d\n ",getpid(),vas);	
	
	getchar();

	fclose(fp);
	
	return 0;
}

int cal_virtual(char *str)
{
	int i = 0;
	int j = 0;
	int n1 = 0;
	int n2 = 0;
	char temp[20];

	for(i = 0,j = 0; str[j]!='-'; i++ , j++)
	temp[i] = str[j];
	
	temp[i] = '\0';
	
	n1 = cal_hexint(temp);
	printf("%s",temp);

	for(i = 0,j = j+1; str[j]!=' '; i++ ,j++)
	temp[i] = str[j] ;

	temp[i] = '\0';

	n2 = cal_hexint(temp);
	
	printf("-%s",temp);
	
	printf("	%d\n",n2-n1);

	return n2-n1;


}

int cal_hexint(char *str)
{
	int v = 0;
	int i = 0;
	
	while(str[i])
	{
		v = v << 4;
		switch(str[i])
		{
			case 'a':
			case 'A':v = v | 10;
					 break;	
	
			case 'B':
			case 'b':v = v | 11;
					 break;			

			case 'c':
			case 'C':v = v | 12;
					 break;			

			case 'd':
			case 'D':v = v | 13;
					 break;			

			case 'e':
			case 'E':v = v | 14;
					 break;			

			case 'f':
			case 'F':v = v | 15;
					 break;			

			default: v = v | (str[i] - 48);

		}
		i++;
	}
	return v;

}
