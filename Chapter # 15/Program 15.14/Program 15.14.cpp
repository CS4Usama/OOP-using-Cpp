#include <iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		A()
		{
			a=0;
		}
		A(int x)
		{
			a = x;
		}
		void showA()
		{
			cout<<"a = "<<a<<endl;
		}
};
class B
{
	private:
		int b;
	public:
		B()
		{
			b=0;
		}
		B(int x)
		{
			b = x;
		}
		void showB()
		{
			cout<<"b = "<<b<<endl;
		}
};
class C : public A, public B
{
	private:
		int c;
	public:
		C() : A(), B()
		{
			c=0;
		}
		C(int x, int y, int z) : A(x), B(y)
		{
			c = z;
		}
		void showC()
		{
			A::showA();
			B::showB();
			cout<<"c = "<<c<<endl;
		}
};

int main()
{
	C obj(1,2,3);
	obj.showC();
	return 0;
}
