#include<iostream>
#include<cstring>

using namespace std;

void DoSomething()
{
	try {
		double num1;
		double num2;
		double num3;
		cout <<"Enter two number:";
		cin >> num1 >> num2;
		if(num2 == 0)
		{
			throw num2;
		}
		num3 = num1/num2;
		cout <<"Result of:"<<num1<<"/"<<num2<<" = "<< num3 <<endl;
	}
	catch(double x) {
			cout <<"Number Divided by 0 (Zero) not possible" << endl;
	}
}
int main()
{
	DoSomething();
	return 0;
}
