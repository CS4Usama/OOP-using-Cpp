//Write a program that takes integer numbers input from the user and then overload subtraction operator to work with user-defined objects.

#include <iostream>
using namespace std;
class Test
{
		int a,b,c;	//Here we did not use any Access Specifier. So, by default it will be private
	public:
		void inp();
		void operator -();
		void disp();
};
void Test::inp()
{
	cout<<"Enter the Value of A: ";
	cin>>a;
	cout<<"Enter the Value of B: ";
	cin>>b;
	cout<<"Enter the Value of C: ";
	cin>>c;
}
void Test::operator -()
{
	a=-a;
	b=-b;
	c=-c;
}
void Test::disp()
{
	cout<<endl<<"VALUES AFTER OVERLOADING:\n";
	cout<<"The Value of A is: "<<a<<endl;
	cout<<"The Value of B is: "<<b<<endl;
	cout<<"The Value of C is: "<<c<<endl;
}

int main()
{
	Test obj;
	obj.inp();
	-obj;
	obj.disp();
	return 0;
}
