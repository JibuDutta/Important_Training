#include<iostream>                                                              
#include<cstring>
using namespace std;                                                            
class Student                                                                   
{                                                                               
	private:                                                                    
		int rollno;                                                         
//		char name[12];
		char *name;		

	public:
		Student();
		Student(int num ,const char* ptr);

		void setData();
		void ChangeName(const char* str)
		{	
				strcpy(name,str); 
		}
		void display();                                                         

};
void Student :: setData()                                                              
{                                                                           
	cout <<"Enter roll no:";                                                
	cin>>rollno;                                                           
	cout <<"Enter Name:";                                                  
//	name = new char []
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
int main()                                                                      
{
/*	Student s1(11,"Jiban");
	Student s2(12,"Santu");

	s1.display();
	s2.display();

	Student s3;

	s3.display();
	s3.setData();
	s3.display();
*/
	/*	
	Student* ptr = NULL;
	ptr = new Student(11,"Santu");
*/
	Student s1(1,"Pradeep");
	Student s2 = s1;   //Shallow copy
	
	s1.display();  //1 Pradeep
	s2.display();  //1 Pradeep

	s2.ChangeName("AJAY");

	s1.display();  //1 Ajay
	s2.display();  //1 Ajay

	return 0;                                                                   
} 
