#include<iostream>
#include<cstring>
using namespace std;
#if 0
class NumericException
{
	private:
		int num;
		char description[20];

	public:
		NumericException()
		{
			num = 0;
			strcpy(description,"SomeError");
		}
		NumericException(int n, const char* str)
		{
			num = n;
			strcpy(description,str);
		}
		void display()
		{
			cout << description <<" " << num <<endl;
		}
};
int main(void)
{
	try {
		int i = 0;
		cout << "Enter a number:";
		cin >> i;

		if(i < 0) {
			throw NumericException(i , "Number is Negative");
		}

	}

	catch (NumericException ob)
	{
		ob.display();
	}

	return 0;
}
#endif

class NumericException
{
};
class RandomException
{
};

int main()
{
	try 
	{
		throw RandomException();	
	}
	catch(RandomException ob1)
	{
		cout <<"Randomexception" <<endl;	
	}
	catch(NumericException)
	{
		cout << "NumericException" <<endl;
	}
	return 0;
}
