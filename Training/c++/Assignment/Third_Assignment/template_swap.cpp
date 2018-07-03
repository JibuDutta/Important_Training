#include<iostream>
template<typename Type>
void swap(Type& a, Type& b ) /*Definition of template function*/
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

	std :: cout << "Enter two Integer:"<< std::endl; /*user input data*/
	std :: cin >> num1 >> num2;

	std :: cout << "Enter Two character:" << std::endl;
	std :: cin >> ch1 >> ch2;

	std :: cout << "Enter two Double value:" << std::endl;
	std :: cin >> d1 >>d2;

	std :: cout <<"Before Swapping The Numbers are:"<< std::endl; /*to display before swapping*/
	std :: cout <<"num1: "<<num1 <<" num2: "<< num2 << std::endl;;
	std :: cout <<"char1: " << ch1 << " char2: " << ch2 << std ::endl;
	std :: cout << "d1: "<< d1<< " d2: "<< d2 << std::endl;

	swap(num1,num2); /*template function call*/
	swap(ch1,ch2);
	swap(d1,d2);

	std :: cout <<"After Swapping The numbers are:"<<std ::endl; /*to display after swapping*/
	std :: cout <<"num1: "<<num1 <<" num2: "<< num2 << std::endl;;
	std :: cout <<"char1: " << ch1 << " char2: " << ch2 << std ::endl;
	std :: cout << "d1: "<< d1<< " d2: "<< d2 << std::endl;

	return 0;
}
