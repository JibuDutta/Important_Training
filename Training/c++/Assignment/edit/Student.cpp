#include"Student.h"
void Student :: SitInClass()
{
	cout << "SITTING IN THE MAIN THEATER:" <<endl;
}
void Student :: display()
{
	cout << "=====Student Information====="<<endl; 
	cout << " Name:"<< first_name << " " << last_name << endl <<" AGE:" << age << endl;
	cout <<" Address:"<< address << endl <<" City:" << city << endl;
	cout <<" Phone_No:" << phone_no << endl << endl ; 

}
Student :: Student()
{
//	cout << "Default Constractor" <<endl;

	first_name = new char [10];
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
{
	first_name = new char[strlen(p)+1];
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
void Student :: getdata()
{
	cout << "Enter The First Name Of the Student:" << endl;
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
