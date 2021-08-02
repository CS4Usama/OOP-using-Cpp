#include <iostream>
using namespace std;
class Circle
{
	private:
		double radius;
	public:
		Circle()
		{
			radius=0;
		}
		void setRadius()
		{
			radius=5.6;
		}
		void computeAreaCirc()
		{
			double area = 3.14*radius*radius;
			double circum = 2*3.14*radius;
			cout<<"\nArea of Circle is: "<<area<<endl;
			cout<<"Circumference of Circle is: "<<circum<<endl<<endl;
		}
};

class Rectangle
{
	private:
		double height;
		double width;
	public:
		Rectangle()
		{
			height=0;
			width=0;
		}
		void setHeight()
		{
			height = 5.0;
		}
		void setWidth()
		{
			width = 4.0;
		}
		void computeArea()
		{
			double area = height*width;
			cout<<"\nArea of Rectangle: "<<area<<endl<<endl;
		}
};


int main()
{
	Circle c1;
	Rectangle r1;
	cout<<"********************SCIENTIFIC-CALCULATOR********************"<<endl<<endl;
	int opt;
	char choice;
	while(true)
	{
		cout<<"\nOPTION 1 for Computing Area and Circumference of the Circle"<<endl;
		cout<<"OPTION 2 for Computing Area of Rectangle"<<endl;
		cout<<"Select your desired option(1-2): ";
		cin>>opt;
		if(opt==1)
		{
			c1.setRadius();
			c1.computeAreaCirc();
		}
		else if(opt==2)
		{
			r1.setHeight();
			r1.setWidth();
			r1.computeArea();
		}
		else
		{
			cout<<"Invalid Option!!, Option should be from (1-2)"<<endl;
		}
		cout<<"Do you want to perform any other calculation (Y/N): ";
		cin>>choice;
		if(choice=='N' || choice=='n')
		{
			break;
		}
	}
	return 0;
}
