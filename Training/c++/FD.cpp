#include<iostream>
using namespace std;
class FD
{
	private:
		int acc;
		mutable	double amount;
	public:
		FD (int r = 0, double a = 0) : acc(r) ,amount(a)
	{
	}
		void Display() const
		{
			cout<<acc<<" "<<amount<<endl;
		}
		void ChangeAmount(double amt) const
		{
			amount = amt;	
		}
};
int main()
{
	const FD ajay(1001,23000);
	ajay.Display();

	ajay.ChangeAmount(45000);
	ajay.Display();

	FD manish(1002,25000);
	manish.ChangeAmount(30000);
	manish.Display();

	return 0;
}

