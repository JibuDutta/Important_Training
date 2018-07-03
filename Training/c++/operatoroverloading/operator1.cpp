#include<iostream>
using namespace std;

class MyCounter
{
	private:
		int id;
		int numofEvents;
	public:
		MyCounter(int i = 0,int x = 0):id(i),numofEvents(x)
	{
	}

		void Display()
		{
			cout << id <<":"<<numofEvents << endl;		
		}
		void operator++()
		{
			cout<<"Operator welcomes you"<<endl;
			++numofEvents;		
		}

		friend void DoCountDown(MyCounter& obj); 

};

void DoCountDown(MyCounter& obj)
{
	obj.numofEvents--;
}
int main()
{
	MyCounter c1; //c1 is a object of my new user defined datatype(class)

	++c1 ;			//c1.operator++(); compiler do this for you

	c1.Display(); // 0 1
	return 0;
}

