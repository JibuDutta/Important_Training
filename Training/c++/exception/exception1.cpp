#include<iostream>
using namespace std;
int main()
{	
	try {	//Suspected code to go here
		int i;
		cout << "Enter a number:";
		cin >> i;	
		if(i == 0)
		{
			throw i;		
			cout << "It will not going to execuite"<<endl;
			//After throw statement control will goes to matching catch block
		}		
		if (i < 0)
		{
			throw "Negative";
		}
		else 
		{
			throw 10.4;
		}
	}	
//	cout <<"Between Try an Throw"<<endl; //This is not allowed 
	
	catch(int i) // to receive always have one parameter // catch block 
	{
		// error handling code //inform the user in a better way
		cout << "The Number is 0 :" <<endl;
	}
	catch (const char *ptr)
	{
		cout << "Negative Number:" << endl;
	}

	catch (...)  // When we are not sured about the exception //Default catch block
	{
		cout <<"Default Catch Block"<<endl;
	}
	return 0;
}
