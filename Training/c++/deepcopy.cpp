#include<iostream>                                                              
#include<cstring>
using namespace std;                                                            
class Student                                                                   
{                                                                               
	private:                                                                    
		int rollno;                                                         
		char *name;		

	public:
		Student(); //Default
		Student(int num ,const char* ptr); //Parameterized
	
		Student(const Student& ob);   // Copy Constractor


		void setData();
		void ChangeName(const char* str)
		{	
				strcpy(name,str); 
		}
		void display();
		
		~Student()
		{
			delete[] name;
			cout<<"Destructor Called"<<endl	;
		}	

};

void DoSomething()
{

	Student* p1 = new Student ;
	delete p1;
}
void Student :: setData()                                                              
{                                                                           
	cout <<"Enter roll no:";                                                
	cin>>rollno;                                                           
	cout <<"Enter Name:";                                                  
	cin >>name ;                                                           
}       
void Student :: display()
{                                                                           
	cout<<"RollNo:"<<rollno<< " "<<"Name:"<< name <<endl;                   
}         
Student :: Student()
{
	cout<<"Default Constractor"<<endl;
	rollno = 0;
	name = new char [5];
	strcpy(name,"----");
}          
Student :: Student(int num ,const char* ptr)
{
	rollno = num;
	name = new char[strlen(ptr)+1];
	strcpy(name,ptr);
}
Student ::Student (const Student& ob)
{
	rollno = ob.rollno;
	name = new char [strlen(ob.name)+1];
	strcpy(name,ob.name);
}
int main()                                                                      
{
	DoSomething();
	
	Student s1(1,"Pradeep");
	Student s2 = s1;   //Shallow copy
	
	s1.display();  //1 Pradeep
	s2.display();  //1 Pradeep

	s2.ChangeName("AJAY");

	s1.display();  //1 Ajay
	s2.display();  //1 Ajay

	return 0;                                                                   
} 
