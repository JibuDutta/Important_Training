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

		MyCounter& operator++()
		{
			cout<<"Operator prefix welcomes you"<<endl;
			++numofEvents;
			return *this;		
		}
		MyCounter& operator++(int x) //Dummy argument we have to add
		{
			cout<<"Operator postfix notation"<<endl;
			++numofEvents;
			return *this;		
		}

		friend void DoCountDown(MyCounter& obj); 

};

void DoCountDown(MyCounter& obj)
{
	obj.numofEvents--;
}
int main()
{
	MyCounter c1; 

	++c1;  //c1.operator++(); compiler do this for u

	c1.Display(); // 0 1

	c1++;
	c1.Display();

	return 0;
}

