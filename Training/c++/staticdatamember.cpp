#include<iostream>
using namespace std;
class Myclass {
	public:
		int a;
		//	int b
		static int b; // Declaration of static DataMember.

};

//int Myclass :: b; //Definition of Static Data member by default value is 0;
int Myclass :: b = 1000;

int main()
{
	//cout<<Myclass :: b<<endl;
	

	Myclass obj1;
	Myclass obj2;

	obj1.a = 11;
	obj1.b = 22;

	obj2.a = 33;
	obj2.b = 44;

	cout<<obj1.a<<" "<<obj1.b<<endl;
	cout<<obj2.a<<" "<<obj2.b<<endl;


	return 0;
}

