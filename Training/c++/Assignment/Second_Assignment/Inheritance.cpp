#include<iostream>
#include<cstring>
using namespace std;

class Employee /*Employee Class*/
{
	protected:
		int emp_number;  /*Data Member as per requirement*/
		char *emp_name;
		char *emp_designation;
	
	public:
		Employee();/*Default Constractor*/
		Employee(int number,const char* name,const char* designation);
		~Employee(); /*Destructor*/

		void get_employee_info();
};

Employee :: Employee() /*Default Constractor Defining*/
{
	emp_number = 0;
	emp_name = new char [10];
	strcpy(emp_name,"NO_NAME");

	emp_designation = new char[15];
   	strcpy(emp_designation,"Nothing");

}
Employee :: Employee(int number,const char* name, const char* designation)
{
	emp_number = number; /*	For Parameterized constractor*/
	
	emp_name = new char[strlen(name)+1]; /*Dynamically allocated memory*/
	strcpy(emp_name,name);

	emp_designation = new char[strlen(designation)+1];
	strcpy(emp_designation,designation);
}

Employee :: ~Employee()
{
						/*Destructor*/
	delete [] emp_name; /*Deallocting*/
	delete [] emp_designation;
}

void Employee :: get_employee_info()
{
	cout <<"Enter The Employee ID:" << endl;  /*User Input Data for An Employee*/
	cin >> emp_number;
	cout <<"Enter the Employee Name:" << endl;
	cin >> emp_name;
	cout <<"Enter the Employee's Designation :" << endl;
	cin >> emp_designation;
}
class Salary : public Employee /*Salary Class Inherited from Employee class */
{
	protected:
		double net_pay;
		double basic_pay; /*Data member*/
		double HRA;
		double DA;
		double PF;

	public:
		void get_salary_info(); /*Member function for salary info*/
		void calculate(); /*calculate the net amount*/
		void Display(); /*Display function*/

};

void Salary :: get_salary_info()
{
	cout << "Enter the Basic Pay of the Employee:" << endl; /*User Input Data*/
	cin >> basic_pay;
	cout << "Enter the HRA of the Employee:" << endl;
	cin >> HRA;
	cout << "Enter the DA of the Employee:" << endl;
	cin >> DA;
	cout << "Enter the PF of the Employee:" << endl;
	cin >> PF;
	
}

void Salary :: calculate()
{
	net_pay = basic_pay + HRA + DA - PF; /* Net_Pay of an Employee*/

}

void Salary :: Display()
{

	cout <<"Emp_ID:"<< emp_number <<" Emp_Name:" <<emp_name ; /*Displaying the Employee Details*/
	cout <<" Designation:" << emp_designation;
   	cout <<" Salary :"<< net_pay << endl;
}
int main()
{

	Salary emp[3]; /*array of object*/
	
	for(int i = 0; i < 3; i++) 
	{	
		emp[i].get_employee_info(); /*getting the employee info*/
		emp[i].get_salary_info(); /*getting the salary info*/
		emp[i].calculate(); /*calculating the netpay*/
	}

	cout <<"===========INFO OF THE EMPLOYEE============"<<endl;	
	for (int i = 0 ; i < 3; i++)
	emp[i].Display(); /*Displaying the Result*/

	return 0;
}
