#ifndef TEACHER_H
#define TEACHER_H

#include"header.h"

class Teacher  
{
	private :	/*Data member for the Teacher*/
		char *first_name;
		char *last_name;
		int  age;
		char *address;
		char *city;
		long int phone_no;

	
	public:
		Teacher(); /*Default Teacher Constractor*/
		
		Teacher(const char *first,const char *last, int a,const char *add, const char *ci,long int ph);
		/*Paramerized Constractor*/
		~Teacher(); /*Destractor*/

		void getdata(); /*User given Data (Method)*/
		
		void display(); /*Showing Teacher Information*/

		void GradeStudent() /*Method GradeStudent as per requirement*/
		{
			cout << " STUDENT GRADED " << endl;
		}
		void SitInClass() /*Method sit in class as per requirement*/
		{
			cout << "SITTING IN THE FRONT OF CLASS" <<endl;
		}
};
void Teacher :: display() /*Definination of the Member Function Display*/
{
	cout << "==================================="<<endl;
	cout << "--------Teacher Information--------"<<endl;
	cout << "==================================="<<endl<<endl;
	cout << "	Name:"<< first_name <<" "<<last_name << endl <<"	AGE:" << age << endl;
	cout <<"	Address:"<< address << endl <<"	City:" << city << endl;
	cout <<"	Phone_No:" << phone_no << endl <<endl ; 
}
Teacher :: Teacher() /*Defination of the Default Constractor*/
{
//	cout << "Default Constractor" <<endl;

	first_name = new char [10]; /*Dynamically allocated memory for datamember*/
	strcpy(first_name,"No_Name:");
	
	last_name = new char [5];
	strcpy(last_name,"--");


	age = 0;

	address = new char[15];
	strcpy(address,"No_Address:");

	city = new char [10];
	strcpy(city,"No_City:");

	phone_no = 0;

}
Teacher :: Teacher (const char *first,const char* last,int a,const char *add,const  char *ci, long int ph)
{/*Parameterized Constarctor for Teacher*/
	first_name = new char[strlen(first)+1]; /*Dynamically allocated memory for datamember*/
	strcpy(first_name,first);
	
	last_name = new char[strlen(last)+1];
	strcpy(last_name,last);
	
	
	age = a;

	address = new char[strlen(add)+1];
	strcpy(address,add);

	city = new char[strlen(ci)+1];
	strcpy(city,ci);
	phone_no = ph;
	
}
Teacher :: ~Teacher() /*Destractor for Teacher*/
{
//	cout << "Destractor Function called:" <<endl;
	delete[] first_name; /*Deallocating memory*/
	delete[] last_name;
	delete[] address;
	delete[] city;

}
void Teacher :: getdata() /*Input Data for user*/
{
	cout << "Enter The First Name Of the Teacher:" << endl;
	cin >> first_name;
	
	cout << "Enter The Last Name Of the Teacher:" << endl;
	cin >> last_name;
	
	cout << "Enter the Age of the Teacher:" << endl;
	cin >> age;
	
	cout << "Enter the Address of the Teacher:" << endl;
	cin >> address;
	
	cout << "Enter the City of the Teacher:" << endl;
	cin >> city;
	
	cout << "Enter the Phone No of the Teacher:" << endl;
	cin >> phone_no;
}
#endif
