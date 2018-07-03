#include<stdio.h>
#define MAX 10
struct st
{

		int roll;
		char name[20];
		float marks[5];
};

void input(struct st student[]);
void print( struct st student[]);

int cnt=0;
int main()
{
		char choice;
		struct st student[10];
		while(1)
		{
				printf("i:insert\np:print\nq:quit\n");
				printf("ENTER YOUR CHOICE\n");
				scanf(" %c",&choice);
				switch(choice)
				{
						case 'i':input(student);break;
						case 'p':print(student);break;
						case 'q':return;
						default:printf("INVALID CHOICE\n");	
				}
		}

}
void input(struct st student[])
{
		int j;
		if(cnt==MAX)
		{
			printf("LIST FULL\n");
			return;
		}
		printf("ENTER THE ROLL NO\n");
		scanf("%d",&(student[cnt].roll));

		printf("ENTER THE NAME\n");	
		getchar();
		fgets(student[cnt].name,20,stdin);

		printf("ENTER THE MARKS\n");
		for(j=0;j<5;j++)
				scanf("%f",&(student[cnt].marks[j]));
	
		cnt++;

}

void print( struct st student[])
{
		int i,j;
		printf(">>>>>>THE LIST IS<<<<<<\n");
		
		printf("ROLL NO			NAME\n");

		for(i=0;i<cnt;i++)
		{
				printf("%d 			%s\n",(student[i].roll),(student[i].name));
				//printf("NO OF EACH SUBJECT\n");
				for(j=0;j<5;j++)
				printf("Marks in SUB[%d]:%f\n",j+1,(student[i].marks[j]));
			
		}

}
