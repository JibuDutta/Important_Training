#include<iostream>
#include <cstring>
using namespace std;
//######## DAY ONE 
#if 0
class student
{
	private:
		int roll;
		int marks;
	public:
		void SetData();
		void Display();
};
void student :: SetData()
{
	cout << "Enter roll:";
	cin >> roll;
	cout << "Enter marks:";
	cin >> marks;	
}
void student :: Display()
{
	cout << "Roll:" << roll <<"Marks:"<<marks;

}
int main()
{
	student s1;

	s1.SetData();
	s1.Display();

	return 0;
}
#endif

#if 0
int x = 10;
int get()
{
	return x;
}
int main()
{	
	int x = 3;
	cout << x << endl;
	cout << get() << endl;
	cout << ::x << endl;  // To use global x // we can used scope resolution
	//
	{
		int x = 5;
		cout << ::x << endl;  // use global x output is 10;

	}

	return 0;
}

#endif

/*Function OverLoading
void fun(int x = 0)
{
	cout << x << endl;
}
int main()
{
	fun(10);
	fun();

	return 0;
}
*/

#if 0
class Toycar {
	private:
			int wheels;
			char color[10];
			int passengers;
	public:
			void SetData(const char* clr , int pass, int w = 4);
			void Show()
			{
				cout << color << " "<< wheels <<" "<< passengers <<endl;
			}
};
/*
==================================================================
 If your Declaration and definition are separated use your Default value 
 in the function declaration
 If you are assigned a default value to any parameter
 make sure after that all parameter are assigned with default value
==================================================================
*/
void Toycar :: SetData(const char* clr , int pass, int w)
{
	strcpy(color,clr);
	passengers = pass;
	wheels = w ;
}
int main()
{
	Toycar mycar;
	mycar.SetData("white",10);

	Toycar truck;
	truck.SetData("Blue", 25 ,10);

	mycar.Show();
	truck.Show();

	return 0;
}
#endif
#if 0

/*
=================================================================
Inline := Function Call is replaced by the function definition 

inline is just a request for compiler
macro is an order

inline is type checking 
==================================================================
*/

#endif
#if 0
class Mystack
{
	private:
		int arr[5];
		int index;
	public:
		//void init();
		Mystack();
		void push(int);
		int pop();
		int top();
};

void Mystack :: push(int x)
{
	if(index < 5)
		arr[++index] = x;
}
int Mystack :: pop ()
{
	if(index >= 0)
	{
		int i = arr[index];
		index--;
		return i;
		
	}
}
Mystack :: Mystack()
{
	cout <<"Initializing Index" << endl;
	index = -1;
}
/*
void Mystack :: init()
{
	index = -1;
}
*/
int Mystack :: top() {
	if(index >= 0)
		return arr[index];
}
int main()
{
	Mystack s1;
	cout << "Creating a Stack Object" << endl;
//	s1.init();
	cout << "pushing elements" << endl;
	s1.push(10);
	s1.push(20);
	s1.push(30);

	cout << s1.top() << endl;
	cout << s1.pop() << endl;
	cout << s1.top() << endl;
	return 0;
}
#endif
/*
================================================================
   1. There is a function which is called automically 
       when an object is created.
   2. Same name as class name
   3. not any return type.
It is use full for constructing object we call it as CONSTRUCTOR
================================================================
*/

#if 0
class mycar {
	private:
		char color[10];
		int wheel;
	public:
		mycar();
		mycar(const char* clr, int);
		void display();
};
mycar :: mycar() /*Default Constrctor*/
{
	strcpy(color,"RED");
	wheel = 4;

}
mycar :: mycar(const char* clr , int w) /*Parameterized*/
{
	strcpy(color,clr);
	wheel = w;
}
void mycar :: display()
{
	cout << "color:" << color <<" "<< wheel << endl;
}
int main()
{
	mycar c1;
	c1.display();

	mycar c2("GREEN",10);
	c2.display();

	return 0;
}
#endif
//########################## DAY 2 ##############################
/*
   How to create alias name/Reference of a varibale

*/
#if 0
int main()
{
	int x = 10;

	int &y = x; /*to create a alias name*/ 
/*
   The moment you create a reference you have to
   initialize also

*/	
	++y;
	cout << x << endl;
	cout << &x << " "<< &y << endl;

	return 0;
}
#endif
#if 0
============================================
 Swapping the number using reference
============================================
void swapdata(int& p,int& q)
{
	int temp = p;
	p = q;
	q = temp ;
}
int main()
{
	int a = 10;
	int b = 20;

	swapdata(a,b);

	cout << a << "	" <<b << endl;
	return 0;
}
=============================================
#endif

/*
    Dynamic Memory Allocation
=============================================

	int *ptr  = new int [5]; allocating basically it returns an address
	delete [] ptr; Deallocating 
	if you will not give this array brackets
	there will be a memory leak 
	delete ptr ; only first byte will deallocate

	For single value
	int *p = new int;
	to store int *q = new int (102);
*/

/*
class student
{
	private:
		int roll;
		char *name;
	public:
		student();
		student(int ,const char*);
		void setdata();
		void display();
		void changename(const char *);
};
student :: student()
{
	cout << "Default Constractor" <<endl;
	roll = 0;

	name = new char [8]; 
	strcpy(name,"Default");

}
student :: student(int r , const char* str)
{
	roll = r ;
	name = new char [strlen(str)+1];
	strcpy(name,str);
	
}
void student :: setdata()
{
	cout <<"Enter the roll:" <<endl;
	cin >> roll;
	cout <<"Enter the Name:" << endl;
	cin >> name;
}
void student :: display()
{
	cout << "Name:" << name <<"	" << roll << endl;
}
void student :: changename(const char* str)
{
	strcpy(name,str);
}
*/
#if 0
int main()
{
	student s0;
	student s1(11,"JIBAN");
	student s2(22,"SaNTU");
	
	s1.display();
	s2.display();
	s0.setdata();
	s0.display();
	return 0;
}
#endif
#if 0
int main()
{
	student* ptr = NULL;
	ptr = new student;
		/*	 How Do I allocate an object of class student
			 dynamically 
			 Default constractor will call
	 		 
			 student* ptr = (student*)malloc(sizeof(student));
			 with malloc your default constractor will not call

		*/

	return 0;
}
#endif

#if 0
int main()
{
	student s1(1,"JIBAN");
	student s2 = s1;

	s1.display(); // 1 JIBAN
	s2.display(); // 1 JIBAN

	s2.changename("Santu");
	s1.display();// 1 Santu
	s2.display();// 1 Santu
	return 0;
}
#endif

/*
   above example is known as shallow copy.
   This is the reason why copy constractor
   is required to avoid shallow copy


Example with copy constractor
Deep	Copy

*/
#if 0
class student
{
	private:
		int roll;
		char *name;
	public:
		student();
		student(int ,const char*);
		student (const student& ob) ; //ob is reference to 
		//student who is constant
		void setdata();
		void display();
		void changename(const char*);
};
student :: student (const student& ob)
{
	roll = ob.roll;
	name = new char [strlen(ob.name)+1];
	strcpy(name, ob.name);
}

student :: student()
{
	cout << "Default Constractor" <<endl;
	roll = 0;

	name = new char [8]; 
	strcpy(name,"Default");

}
student :: student(int r , const char* str)
{
	roll = r ;
	name = new char [strlen(str)+1];
	strcpy(name,str);
	
}
void student :: setdata()
{
	cout <<"Enter the roll:" <<endl;
	cin >> roll;
	cout <<"Enter the Name:" << endl;
	cin >> name;
}
void student :: display()
{
	cout << "Name:" << name <<"	" << roll << endl;
}
void student :: changename(const char* str)
{
	strcpy(name,str);
}

int main()
{
	student s1(1,"JIBAN");
	student s2 = s1;

	s1.display(); // 1 JIBAN
	s2.display(); // 1 JIBAN

	s2.changename("Santu");
	s1.display();// 1 JIBAN 
	s2.display();// 1 Santu
	return 0;
}
	
#endif
/*
   Destructor Function
   A function called automically when object is destroyed
   It called automically
   name is same as class name with a tilde charcter
   ~student()
   {
   	delete [] name;
   }
*/

/*
	if you created a static datamember this member will
	create only once in the memory and all the object u will
	create from that class will shared the particular datamember
	if you changed it in one will reflected the other

*/
#if 0 
class myclass
{
	public :
		int a;
		
		static int b;
};
int myclass :: b;
int main()
{
	myclass ob1;
	myclass ob2;
	ob1.a = 11;
	ob1.b = 22;

	ob2.a = 33;
	ob2.b = 44;

	cout << "OB1:" << ob1.a <<" " << ob1.b <<endl;
	cout << "OB2:" << ob2.a <<" " << ob2.b <<endl;
	return 0;
}
#endif

/*
	Static member function cannot received this pointer
	static member function can access only static data member

=======================================================
				Polymorphism
=======================================================

STL : Standard Template Library
=====================================================

 1. Container :That stores another object.
 2. Algoritham:The algoritam that work on the data you stored inside the containers 
 3. Iterator: Which acts as a pointer 

 Types of Container :-
 1. Sequence	 	2. Associative<key and value> 	another one is Adaptor
 --> list		      --> map			-->stack
 --> vector		      --> multimap		-->queue
     (dynamic array)
 --> set		
 --> multiset	

 */
