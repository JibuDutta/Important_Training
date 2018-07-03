#include<iostream>
using namespace std;

void test(int i)
{
	try /*try block*/
	{
		if(i > 0)
			throw i;
		else
			throw "String";
		
	}
	catch(int i) /*catch block*/
	{
		cout <<"The Number is greater than 0 (zero):" << endl;
	}
	catch(const char* str) /*catch block*/
	{
		cout <<"The Number is not greater than 0 (zero):"<<endl;
	}
}

int main()
{
	test(10); /*function calling*/	
	test(0); /*function calling*/	
	return 0;

}
