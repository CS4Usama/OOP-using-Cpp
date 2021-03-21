//Write a program that explains the concept of friend class. Program pass the data member of class A in B through friend class and then display their values separately.

#include <iostream>
using namespace std;
class A
{
	private:
		int a, b;
	public:
		A()
		{
			a=10;
			b=20;
		}
		friend class B;
};
class B
{
	public:
		void showA(A obj)
		{
			cout<<"The Value of Class A: "<<obj.a<<endl;
		}
		void showB(A obj)
		{
			cout<<"The Value of Class B: "<<obj.b<<endl;
		}
};

int main()
{
	A x;
	B y;
	y.showA(x);
	y.showB(x);
	return 0;
}
