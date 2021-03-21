/*Write a program that overloads binary addition operator +. Program takes values using parameterized constructor and define member functions outside the class
using scope resolution operator :: */

#include <iostream>
using namespace std;
class Test
{
		int a, b;	//Here we did not use any Access Specifier. So, by default it will be private
	public:
		Test()	//Default Constructor
		{
			a=b=0;
			/* Another Method:
			a=0;
			b=0; */
		}
		Test(int x, int y)	//Parameterized Constructor
		{
			a=x;
			b=y;
		}
		Test operator +(Test t);
		void disp();
};

Test Test::operator +(Test t)	//Here 1st Test is the Return Type and 2nd Test is used with Scope Resolution Operator :: because our Overloading Function is used outside the class.
{
	Test tmp;
	tmp.a = t.a + a;
	tmp.b = t.b + b;
	return tmp;
}
void Test::disp()
{
	cout<<"The Value of A is: "<<a<<endl;
	cout<<"The Value of B is: "<<b<<endl;
}

int main()
{
	Test t1, t2, t3;	//Here Default Constructor is called and the Data Members of these Objects are initialized to Zero.
	
	/* In below two lines, Values are passed in Parameterized Constructor using Explicit method because these Member Functions are defined outside the class
	using Scope Resolution Operator :: It is not used here as Returned Value. */
	t1 = Test(10,20);
	t2 = Test(30,40);
	//Here + Operator Binary Overloaded Function is called to add both objects.
	t3 = t1 + t2;
	cout<<"VALUES of 1st OBJECT:"<<endl;
	t1.disp();
	cout<<endl<<"VALUES of 2nd OBJECT:"<<endl;
	t2.disp();
	cout<<endl<<"SUM of the VALUES of Above BOTH OBJECTS:"<<endl;
	t3.disp();
	return 0;
}
