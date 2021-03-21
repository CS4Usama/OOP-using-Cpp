/*Write a program that explains the concept of Friend Function. Program consists on three objects. Two objects contains integer values and third object
will display its sum.*/

#include <iostream>
using namespace std;
class B;	//Class ProtoType that is necessary to give because of giving reference in decalring a friend function.
class A
{
	private:
		int a;
	public:
		A()
		{
			a=10;
		}
		friend void show(A,B);
};
class B
{
	private:
		int b;
	public:
		B()
		{
			b=20;
		}
		friend void show(A,B);
};
void show(A x, B y)
{
	int r = x.a + y.b;
	cout<<"The Value of Class A Object: "<<x.a<<endl;
	cout<<"The Value of Class A Object: "<<y.b<<endl;
	cout<<"The Sum of Above Both Objects: "<<r;
}

int main()
{
	A obj1;
	B obj2;
	show(obj1, obj2);
	return 0;
}
