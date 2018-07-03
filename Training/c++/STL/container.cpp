#include<iostream>
#include<string>

#include<set>
#include<vector>
using namespace std;
int main()
{
#if 0
	set<string> fruits;
	fruits.insert("Orange");
	fruits.insert("Banana");
	fruits.insert("Grapes");
	fruits.insert("Orange");

	set<string> :: iterator it = fruits.begin();
	for(;it !=fruits.end();it++)
	{
		cout << *it <<endl;
	}
	cout << endl;
#endif

	vector<int> vec;
	
	vec.push_back(10);
	vec.push_back(22);

	cout << vec.size() <<endl; //return the no of element in the container
	cout << vec.capacity() <<endl; //tells you that this vector this much capacity:
	
	return 0;
}

