#include<iostream>

using namespace std;

template<typename Type>
void swapping(Type& a, Type& b )
{
	Type temp = a;
		   a = b;
		   b = temp;
}


int main()
{
	int num1,num2;
	double d1,d2;
	char ch1,ch2;
	cout << "Enter two Integer:"<< endl;
	cin >> num1 >> num2;

	cout << "Enter Two character:" << endl;
	cin >> ch1 >> ch2;

	cout << "Enter two Double value:" <<endl;
	cin >> d1 >>d2;

	cout <<"Before Swapping The Numbers are:"<< endl;
	cout <<"num1: "<<num1 <<" num2: "<< num2 << endl;;
	cout <<"char1: " << ch1 << " char2: " << ch2 << endl;
	cout << "d1: "<< d1<< " d2: "<< d2 << endl;

	swapping(num1,num2);
	swapping(ch1,ch2);
	swapping(d1,d2);
	cout <<"After Swapping The numbers are:"<<endl;
	cout <<"num1: "<<num1 <<" num2: "<< num2 << endl;;
	cout <<"char1: " << ch1 << " char2: " << ch2 << endl;
	cout << "d1: "<< d1<< " d2: "<< d2 << endl;



	return 0;
}
