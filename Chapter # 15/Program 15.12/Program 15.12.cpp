#include <iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		void in()
		{
			cout<<"Enter a: ";
			cin>>a;
		}
		void out()
		{
			cout<<"The Value of a is: "<<a<<endl;
		}
};
class B
{
	private:
		int b;
	public:
		void input()
		{
			cout<<"Enter b: ";
			cin>>b;
		}
		void output()
		{
			cout<<"The Value of b is: "<<b<<endl;
		}
};
class C : public A, public B
{
	private:
		int c;
	public:
		void get()
		{
			cout<<"Enter c: ";
			cin>>c;
		}
		void show()
		{
			cout<<"The Value of c is: "<<c<<endl;
		}
};
int main()
{
	C obj;
	obj.in();
	obj.input();
	obj.get();
	obj.out();
	obj.output();
	obj.show();
	return 0;
}
