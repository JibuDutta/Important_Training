#include<iostream>
using namespace std;

void swap_numbers(double &a, double &b) /*Function Definition*/
{
	double temp; 	/*Swap Using Reference*/
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	double num1,num2;
	
	cout << "Enter Two Numbers: " << endl	;
	cin >> num1 >> num2;	/*User Data*/
	
	cout <<"Before Swapping ::";
	cout <<"Number1:" << num1 << " Number2:"<< num2 << endl;

	cout <<"After Swapping  ::";

	swap_numbers(num1,num2); /*Function Call to Swap Numbers*/
	
	cout <<"Number1:" << num1 << " Number2:"<< num2 << endl;

	return 0;

}
