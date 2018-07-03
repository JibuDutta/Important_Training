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
		void DoCountUp()
		{
			++numofEvents;			
		}
		void Display()
		{
			cout << id <<":"<<numofEvents << endl;		
		}
		friend void DoCountDown(MyCounter& ob);
};
void DoCountDown(MyCounter& ob)
{
	ob.numofEvents--;
}

int main()
{
	MyCounter c1;
	c1.DoCountUp();
	c1.DoCountUp();
	c1.Display();
	
	DoCountDown(c1);
	c1.Display();

	return 0;
}
