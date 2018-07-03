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

		MyCounter operator+(const MyCounter& ob)
		{
			MyCounter temp; ///Temporary Object
			temp.numofEvents = numofEvents + ob.numofEvents; //1st one is c1 and 2nd one is c2's 
			temp.id = id + ob.id; //id is c1's id and ob.id is c2's id
			return temp;				
		}	
};
int main()
{
	MyCounter c1(0,1);
	MyCounter c2(1,33);

	MyCounter c3;
	c3 = c1 + c2; 	//c1.operator+(c2)(c1 is invoked the function and c2 is passed as a argument)
	c3.Display();
	return 0;
}
