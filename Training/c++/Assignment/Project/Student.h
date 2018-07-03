#ifndef STUDENT_H
#define STUDENT_H

#include"header.h"

//#include"Course.h"
class Student 
{
	private:
		char *first_name; /*Data Member for the Student */
		char *last_name;
		int  age;
		char *address;
		char *city;
		long int phone_no;

	
	public:
		Student(); /*Default Constractior*/
		Student (const char *p,const char *q,int a,const char *add, const char *ci,long int ph);
		/*Parameterized Constractor*/
		~Student(); /*Destractor*/
		void getdata(); /* For User Input()*/
		void display(); /*For Print The Student Information*/

		void SitInClass() /*SitInClass Method as per Question*/
		{
			cout << "SITTING IN THE MAIN THEATER:" <<endl;
		}
};
void Student :: display() /*  TO Display Student Information */
{
	cout <<"======================================"<<endl;
	cout <<"---------Student Information----------"<<endl; 
	cout <<"======================================"<<endl<<endl;
	cout <<"	Name:"<< first_name << " " << last_name << endl <<"	AGE:" << age << endl;
	cout <<"   	Address:"<< address << endl <<"	City:" << city << endl;
	cout <<"	Phone_No:" << phone_no << endl << endl <<endl ; 

}
Student :: Student()
{
	/*Definition of the Default Constractor to set default value*/

	first_name = new char [10]; /*Dynamically allocated */
	strcpy(first_name,"No_FirstName:");
	last_name = new char [10];
	strcpy(last_name,"No_LastName:");


	age = 0;

	address = new char[15];
	strcpy(address,"No_Address:");

	city = new char [10];
	strcpy(city,"No_City:");

	phone_no = 0;

}
Student :: Student (const char *p,const char *q,int a,const char *add,const  char *ci, long int ph)
{ /*Parameterized Constractor Definition*/

	first_name = new char[strlen(p)+1]; /*Dynamically Allocated Memory*/
	strcpy(first_name,p);
	
	last_name = new char[strlen(q)+1];
	strcpy(last_name,q);
	
	
	age = a;

	address = new char[strlen(add)+1];
	strcpy(address,add);

	city = new char[strlen(ci)+1];
	strcpy(city,ci);

	phone_no = ph;
	
}
Student :: ~Student() 
{
//	cout << "Destractor Function called:" <<endl;
	delete[] first_name;
	delete[] last_name;
	delete[] address;
	delete[] city;

}
void Student :: getdata() /*Definition Of the Getdata Member Function*/
{
	cout << "Enter The First Name Of the Student:" << endl; /*User Input*/
	cin >> first_name;
	cout << "Enter The Last Name Of the Student:" << endl;
	cin >> last_name;
	
	
	cout << "Enter the Age of the Student:" << endl;
	cin >> age;
	
	cout << "Enter the Address of the Student:" << endl;
	cin >> address;
	
	cout << "Enter the City of the Student:" << endl;
	cin >> city;
	
	cout << "Enter the Phone No of the student:" << endl;
	cin >> phone_no;
}

#endif
