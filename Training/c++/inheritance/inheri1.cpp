#include<iostream>
using namespace std;
class MyCounter   ////Base Class
{
	//private:
	protected:
		int id;
		int numofEvents;
	public:
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
	void DoCountDown()
	{
		--numofEvents;  //you can not access it because it is a private member of base class so made it protected.		
	}
};
int main()
{
	DownCounter d1;
	d1.SetEvents(10);

	d1.Display();

	d1.DoCountDown();

	d1.Display();

	MyCounter c1;
	cout <<sizeof(c1) << endl;

	c1.DoCountUp();
	//c1.DoCountDown(); //ERROR base class does not known anything about derived class
	return 0;
}
