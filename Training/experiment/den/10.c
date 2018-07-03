#include<stdio.h>

static char daytab[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};
void month_day(int year, int yearday, int *pmonth, int *pday);

int day_of_year(int year,int month,int day);

int main()
{
	char ch;	
	int day = 0;
	int date = 0;
	int month = 0;
    int year = 0;
	int yearday = 0;
	int pday = 0;
	int pmonth = 0;
	
	while(1)
		{
		printf("A:DAY_OF_YEAR\nB:MONTH_DAY\nQ:EXIT\n");
		scanf(" %c",&ch);
		switch(ch)
			{
			case 'A':
			case 'a':
					printf("Enter the year:\n");
					scanf("%d",&year);
					printf("Enter the month\n");
					scanf("%d",&month);
					printf("Enter the day:\n");
					scanf("%d",&date);


					day = day_of_year(year,month,date);
	
		printf("%d Month %d date is the %d day of the year\n",month,date,day);
					break;
			case 'B':
			case 'b':
					printf("Enter the year:\n");
					scanf("%d",&year);
					printf("Enter the Year Day\n");
					scanf("%d",&yearday);
					month_day(year,yearday, &pmonth,&pday);
		printf("%d is the %d day of the %d Month\n",yearday,pday,pmonth);	
					break;
			case 'Q':
			case 'q':return ;
					
			default :printf("GIVE PROPER INPUT\n");
			}
		}

}
/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i = 0;
	int leap = 0;
	leap = (year%4 == 0) && (year%100 != 0) || (year%400 == 0);
	
	for (i = 1; yearday > daytab[leap][i]; i++)
	yearday = yearday - * ( * (daytab+leap)+i);
	
	*pmonth = i;
	*pday = yearday;
}

/*day_of the_year:set day of year from month and day*/

int day_of_year(int year,int month,int day)
{
	int i=0;
	int leap=0;

	leap = (year%4 == 0) && (year%100 != 0) || (year%400 == 0);
	for(i = 1 ; i<month ; i++)
	{
		day = day + * ( * (daytab + leap) + i);

	}
	return day;
}

