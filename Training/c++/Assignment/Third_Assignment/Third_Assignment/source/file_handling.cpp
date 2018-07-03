#include<iostream>
#include<fstream>

using namespace std;

#define MAX 80
int main()
{	
	char text[MAX];

	fstream file; /*file stream*/
	file.open("./example.txt",ios::out ); /*open a file for writing and reading*/

	cout <<"Write what you want to write on the text file:"<<endl;
	cin.getline(text,sizeof(text));

	for(int i = 0; i < MAX ; i++)
	{
		if (text[i]>=97 && text[i] <=122)
			text[i] = text[i] - 32;
	}

	file <<text <<endl; 		/*writing to a file*/
	file.close(); 				/*closing the file*/


	ifstream file1("example.txt");					 /*input file stream*/
	char ch;
	while (file1.get(ch)) {  /* till end-of-file*/
		cout << ch; /*display on the screen*/
	}
	
	file1.close();  /*file close*/

	return 0;
}
