#include<iostream>
#include<cstring>
using namespace std;

class MyCounter   ////Base Class
{
	protected:
		int id;
		int numofEvents;
	public:
		MyCounter(){
			id = 0; numofEvents = 0;
			cout << "MyCounter()" << endl;

		}

		MyCounter(int i , int n): id(i),numofEvents(n)
		{
			cout<<"MyCounter with params"<<endl;
		}

		~MyCounter()
		{
			cout << "~MyCounterDestructor" << endl;

		}
		MyCounter& DoCountUp()
		{
			++numofEvents;
			return *this;		
		}
		void SetEvents(int x)
		{
			numofEvents = x;
		}
		void Display()
		{
			cout << id <<":" << numofEvents << endl;
		}
};

class DownCounter : public MyCounter  //This public is known as Mode of Inheritance.  ///Derived Class
{
	char name[12];
	public:
		DownCounter(int i ,int n,char *str ) :MyCounter(i,n)
		{
			id =i ;
			numofEvents = n;
			cout<<"DownCounterwith Param"<<endl;
			strcpy(name,str);
		}
		DownCounter()
		{
			cout <<"DownCounter"<<endl;		
		}
		~DownCounter()
		{
			cout<<"~~~~DownConter Destructor"<< endl;

		}

		void DoCountDown()
		{
			--numofEvents;  //you can not access it because it is a private member of base class so made it protected.		
		}
};

int main()
{
	DownCounter d1(100,23,"Ajay");
	
}
