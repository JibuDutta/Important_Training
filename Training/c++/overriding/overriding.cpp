#include<iostream>
using namespace std;

class Computer
{
	public:
		void calculateprice()
		{
				cout << "computer price :25000" << endl;
		}
};

class laptop : public Computer
{
	public:
		void calculateprice()
		{
			cout<<"Laptop price :50000" << endl;
		}

};

int main()
{
	Computer c1;
	Computer c2;
	Computer *pc = NULL;

	pc = &c1;

	pc->calculateprice();

	laptop l1;
	laptop l2;

//	l1.calculatelaptopprice();

	l1.calculateprice();

	return 0;

}
