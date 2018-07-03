#include<stdio.h>
#if 0
	//int a;
int main()
{
	int a=5;
	int b=5;
	for(;a<10;a+=2)
	{
	//break;
		printf("GLOBAL EDGE\n");
		if(b==5)
		{
		printf("C is GOOD\n");
		//break;
		} 
		printf("JEEVAN\n");
	}
	/*if(b==5)
	{
	printf("C is Good\n");
	break;
	}*/
	while(a)
	{
	printf("%d\n",a);
	a--;
	}
	return 0;


}


#endif


#if 0 
int main()
{
char choice;
printf("enter the choice\n");
scanf("%c",&choice);
switch(choice)
{
default:printf("Default statement\n");
case 'a':printf("1stline\n");
case 'b':printf("2ndline\n");break;
case 'c':printf("3rdline\n");break;
case 'd':printf("4thline\n");break;
case 'e':printf("5thline\n");break;
default:printf("Default statement\n");
}
return 0;

}
#endif
#if 1
int main()
{
int choice=1;
//printf("enter the choice\n");
//scanf("%d",&choice);
//switch(sizeof(int))
//switch(++choice)
switch(choice*5)
{
case 1:printf("1stline\n");break;
case 2:printf("2ndline\n");break;
case 3:printf("3rdline\n");break;
case 4:printf("4thline\n");break;
case 5:printf("5thline\n");break;
default:printf("Default statement\n");
}
return 0;

}
#endif
