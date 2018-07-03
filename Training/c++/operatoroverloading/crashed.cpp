#include<iostream>
#include<cstring>
using namespace std;

class Student
{
	private:
		int rollnum;
		char *name;
	public:
		Student();
		Student(int num, char* str);
		Student(const Student& ob);

		void SetData();
		void ChangeName(char *str)
		{
			strcpy(name,str);		
		}
		void Display();
		~Student()
		{
			cout << "Destructor" <<endl;
			delete[] name;		
		}
};
Student :: Student()
{
	cout << "Default Constractor" << endl;
	rollnum = 0;
	name = new char[5];
	strcpy(name,"NONE");
}
Student :: Student(int num, char* str)
{
	rollnum = num ;
	name = new char[strlen(str)+1];
	strcpy(name,str);
}
Student :: Student(const Student& ob)
{
	rollnum = ob.rollnum;
		name = new char[strlen(ob.name)+1];
	strcpy(name,ob.name);
}
void Student :: SetData()
{
	cout << "Enter roll num:"<<endl;
	cin >> rollnum ;
	cout << "Enter Name:"<<endl;
	cin >> name;
}
void Student :: Display()
{
	cout << "rollnum:"<< rollnum <<"Name:" << name << endl;
}
int main()
{
	Student s1(1,"Pradeep");

	Student s2(2,"Ajay");

	s1 = s2;

	s1.ChangeName("Amit");
	s1.Display();   // 2 Amit ????
	s2.Display();  //2 Amit  ???? AND Crashed why

	return 0;
}
