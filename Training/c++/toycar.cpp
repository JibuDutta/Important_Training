#include<iostream>
#include<cstring>
using namespace std;

class ToyCar {
	private:
			int wheels;
			char color[10];
			int passengers;
	public:
		void SetDetails(const char* clr,int pass,int w = 4)
		{
			strcpy(color,clr);
			wheels = w;
			passengers = pass;
		}

		ToyCar()   //default Constractor 
		{
			strcpy(color,"White");
			wheels = 4;
			passengers = 5;
		}		
		ToyCar(const char* clr,int pass,int w) //Parameterized Constarctor
		{
			strcpy(color,clr);
			wheels = w;
			passengers = pass;
		}
		void Show()
		{
			cout<<"color:"<<color<<" wheels: "<<wheels<<" Passengers:"<<passengers<<""<<endl;
		}
};

int main()
{
//	ToyCar mycar;
/*	mycar.SetDetails("White",8);
	mycar.Show();

	ToyCar truck;
	truck.SetDetails("Black",4,10);
	truck.Show();

	ToyCar m800;
	m800.SetDetails("Red",6);
	m800.Show();
*/
	ToyCar c1;
	c1.Show();
	ToyCar c2;
	c2.Show();


	ToyCar c3("RED",50,10);
	c3.Show();
	return 0;

}
