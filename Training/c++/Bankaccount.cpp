#include<iostream>  ///Example of static Data member
using namespace std;
class BankAccount
{
	private:
		int accNum;
		double princ;
		int duration;

		static double rate;
	public:
		BankAccount(int	num = 0,double pri = 0,int dur = 0)
		{
			accNum = num;
			princ = pri;
			duration = dur;
		}

		void calculateSum()
		{
			double sum = (princ * duration * rate/100) + princ; 
				cout << sum <<endl;

		}

		static void ChangeRate(double r);

};
double BankAccount :: rate = 8.5;

void BankAccount :: ChangeRate(double r)
{
	BankAccount :: rate = r;
}

int main()
{
	BankAccount Jiban(1111,20000,5);
	BankAccount Santu(2222,30000,5);

	Jiban.calculateSum();
	Santu.calculateSum();

	BankAccount :: ChangeRate(9);
	
	Jiban.calculateSum();
	Santu.calculateSum();



	return 0;

}
