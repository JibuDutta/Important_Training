#include<iostream>
#include<cstring>
using namespace std;
class InvalidDay
{
	private :
			int num;
			char description[20];
	public:
			InvalidDay()
			{
				num =  0;
				strcpy(description,"SomeError");

			}
			InvalidDay(int n ,const char *ptr)
			{
				num = n;
				strcpy(description,ptr);
			}
			void display()
			{
				cout <<description <<" "<< num <<endl;
			}
};
class InvalidMonth
{
	private :
			int num;
			char description[20];
	public:
			InvalidMonth()
			{
				num =  0;
				strcpy(description,"SomeError");

			}
			InvalidMonth(int n ,const char *ptr)
			{
				num = n;
				strcpy(description,ptr);
			}
			void display()
			{
				cout <<description <<" "<< num <<endl;
			}
};
int main()
{
	try
	{
		int date,month,year;
		int i;

		cout << "Enter the Date of Birth (DD/MM/YYYY):";
		cin >> date >>month >>year;
	
		if(year >= 1900 && year <= 9999) /*Check Year*/
		{
			
			if(month >=1 && month <=12) /*Month Check*/
			{
				
				if(date >=1 && date <=31) 
				{
					
				}	
			}
		}
		if (date > 31 || date < 0)
		{
			throw InvalidDay(date,"Invalid Date");	
		}
		if (month > 12 || month < 0)
		{
			throw InvalidMonth(month,"Invalid Month");
		}
		switch(month)
		{
			case 1:cout <<"Your Date of Birth is January"<< date <<"," << year << endl;
				   break;
			case 2:cout <<"Your Date of Birth is February" << date <<", " << year << endl;		 
				   break;
			case 3:cout <<"Your Date of Birth is March "<< date << "," << year << endl;		 
					break;
			case 4:cout <<"Your Date of Birth is April "<< date << "," << year << endl;		 
					break;
			case 5:cout <<"Your Date of Birth is May "<< date << ", "<< year << endl;		 
					break;
			case 6:cout <<"Your Date of Birth is June " << date <<", " << year << endl;		 
					break;
			case 7:cout <<"Your Date of Birth is July "<< date <<"," << year << endl;		 
					break;
			case 8:cout <<"Your Date of Birth is August "<< date << ", " <<year << endl;		 
					break;
			case 9:cout <<"Your Date of Birth is September "<< date << ", " <<year << endl;		 
					break;
			case 10:cout <<"Your Date of Birth is October "<<date << ", " << year << endl;		 
					break;
			case 11:cout <<"Your Date of Birth is November "<< date <<", " << year << endl;		 
					break;
			case 12:cout <<"Your Date of Birth is December "<< date <<", " << year << endl;		 
					break;
		}
	}
	catch(InvalidDay Dayobj)
	{
		Dayobj.display();
	}
	catch(InvalidMonth Monthobj)
	{
		Monthobj.display();
	}
	return 0;
}

