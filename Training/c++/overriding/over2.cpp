#include<iostream>
using namespace std;
class Computer
{
	protected:
		int id;
	public:
	virtual	void calculateprice() {
			cout << "25000" << endl;		
		}
};
class laptop : public Computer
{
	int modelno;
	public:
	void calculateprice()
	{
		cout << "laptop price 50000" << endl;		
	}
};
int main()
{
	Computer c1;
	Computer c2;
	Computer *pc = NULL;

	laptop l1;
	laptop l2;
	laptop *pl = NULL;

	pc = &l1; //upcasting

	//	pl = &c1 // downcasting

	pc->calculateprice();


//	c1 = l1;  //model no will ignored this is also called upcastng
	//ignored part is known as object slicing
	

	return 0;
}
