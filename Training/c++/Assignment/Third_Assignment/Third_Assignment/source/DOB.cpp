#include<iostream>
#include<cstring>
using namespace std;
const char *montharray[13] = {"","January","February","March","April","May","June","July","August","September","October","November","December"};

class InvalidDay /*Exception class Invalid Day*/
{
	private :
			int num;
			char description[20];
	public:
			InvalidDay() /*default constractor*/
			{
				num =  0;
				strcpy(description,"SomeError");

			}
			InvalidDay(int n ,const char *ptr) /*parameterized*/
			{
				num = n;
				strcpy(description,ptr);
			}
			void display() /*to display the error*/
			{
				cout <<description <<" "<< num <<endl;
			}
};
class InvalidMonth /*Exception class Invalid Month*/
{
	private :
			int num;
			char description[20];
	public:
			InvalidMonth() /*default constractor*/ 
			{
				num =  0;
				strcpy(description,"SomeError");

			}
			InvalidMonth(int n ,const char *ptr) /*parameterized*/  
			{
				num = n;
				strcpy(description,ptr);
			}
			void display() /*to display the error*/
			{
				cout <<description <<" "<< num <<endl;
			}
};
class InvalidYear /*Exception class Invalid Year*/
{
	private :
			int num;
			char description[20];
	public:
			InvalidYear() /*default constractor*/ 
			{
				num =  0;
				strcpy(description,"SomeError");

			}
			InvalidYear(int n ,const char *ptr) /*parameterized*/
			{
				num = n;
				strcpy(description,ptr);
			}
			void display() /*to display the error*/
			{
				cout <<description <<" "<< num <<endl;
			}
};
int main()
{
	try /*try block*/
	{
		int date,month,year;

		cout << "Enter the Day	:";
		cin >> date ;
		cout << "Enter the Month	:";
		cin >> month;
		cout << "Enter the Year	:";
		cin >> year;
		
		if(year >= 1900 && year <= 9999) //Check Year
		{
			
			if(month >=1 && month <=12) //Month Check
			{
				
				if((date >=1 && date <=31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
				{
					 cout << montharray[month] <<" " << date <<", " <<year <<endl;	/*which month are 31 days*/
				}
				else if (( date >=1 && date <=30 ) &&(month == 4 || month == 6 || month == 9 || month == 11))
				{
					 cout << montharray[month] <<" " << date <<", " <<year <<endl; /*which month are 30 days*/
				}
				else if ((date >=1 && date <= 28) && (month == 2)) /*February month*/
				{
					 cout << montharray[month] <<" " << date <<", " <<year <<endl;	
				}
				else if ((date == 29 && month == 2) && ((year % 4 == 0 && year %100 !=0) ||(year % 400 == 0))) /*checking Leapyear or Not*/
				{
					cout << montharray[month] <<" " << date <<", " <<year <<endl;
				}
				else
				{
					throw InvalidDay(date,"Invalid Date");	/*throw an error for day*/
					
				}	
			}
			else
			{
				throw InvalidMonth(month,"Invalid Month"); /*throw an error for month*/
			}
		}
		else
		{
			throw InvalidYear(year ,"Invalid Year:"); /*throw an error for year*/
		}
	}	
	catch(InvalidDay Dayobj) /*catch block for day*/
	{
		Dayobj.display();
	}
	catch(InvalidMonth Monthobj) /*catch block for month*/
	{
		Monthobj.display();
	}
	catch(InvalidYear Yearobj) /*catch block for year*/
	{
		Yearobj.display();
	}
	return 0;
}

