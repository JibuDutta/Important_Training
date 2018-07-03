#include<iostream>
using namespace std;

class Base   /*Base Class*/
{
	public:
		virtual void show() /*Show Member function in Base class*/
		{
			cout << "Base Class: virtual show() function" << endl;
		}
		virtual void display() /*Display member function in Base class*/
		{
			cout << "Base Class: display() function" << endl;
		}
};

class Derived : public Base /*Derived Class*/
{
	public:
		void show() /*Show() member function in Derived class*/
		{
			cout << "Derived Class: show() function" << endl;
		}
		void display() /*display member function in Derived class */
		{
			cout << "Derived Class: display() function" << endl;
		}
};

int main()
{
	Base base_object; /*Base class object*/
	
	Base *ptr = NULL; /*Base class pointer*/
	
	ptr = & base_object;
	
	ptr->show();
	ptr->display();

	Derived derived_object; /*Derived class object*/
	ptr = & derived_object;
	
	ptr->show();
	ptr->display();



	return 0;

}
