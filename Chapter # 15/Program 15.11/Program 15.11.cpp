#include <iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		void set(int m)
		{
			a = m;
		}
		void out()
		{
			cout<<"The Value of a is: "<<a<<endl;
		}
};
class B : public A
{
	private:
		int b;
	public:
		void set(int m, int n)
		{
			A::set(m);
			b = n;
		}
		void out()
		{
			A::out();
			cout<<"The Value of b is: "<<b<<endl;
		}
};
class C : public B
{
	private:
		int c;
	public:
		void set(int m, int n, int o)
		{
			B::set(m,n);
			c = o;
		}
		void out()
		{
			B::out();
			cout<<"The Value of c is: "<<c<<endl;
		}
};

int main()
{
	C obj;
	obj.set(1,2,3);
	obj.out();
	return 0;
}
