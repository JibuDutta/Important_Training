#include<iostream>
using namespace std;

void DoSomething() throw(int)
{
	try { 		  //Suspected code to go here
		int i;
		cout << "Enter a number:";                                              
		cin >> i; 

		if(i == 0){                                                                       
			throw i;                                                            
		}
		else {
			throw "something";
		}
	}	
	catch (int x)
	{
		cout <<"Rethrowing from here" <<endl;	
		throw;
	}

}	
int main()
{

	try {
		DoSomething();
	}
	catch( const char* ptr)
	{
		cout << ptr <<endl;	
	}
	catch( int i)
	{
		cout <<" In main() The number is 0"<< endl;	
	}
	catch(...)
	{
		cout << "Default catch Bye bye" <<endl;	
	}
	return 0;
}

