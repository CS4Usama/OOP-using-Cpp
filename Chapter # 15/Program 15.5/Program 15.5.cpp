#include <iostream>
using namespace std;
class Simple
{
	protected:
		int a,b;
	public:
		Simple()
		{
			a=b=0;
		}
		void inp()
		{
			cout<<"Enter a: ";
			cin>>a;
			cout<<"Enter b: ";
			cin>>b;
		}
		void add()
		{
			cout<<"a+b = "<<a+b<<endl;
		}
		void sub()
		{
			cout<<"a-b = "<<a-b<<endl;
		}
		void mul()
		{
			cout<<"a*b = "<<a*b<<endl;
		}
		void div()
		{
			cout<<"a/b = "<<a/b<<endl;
		}
};

class Complex : public Simple
{
	public:
		void add()
		{
			if(a<=0 || b<=0)
				cout<<"Invalid Values."<<endl;
			else
				cout<<"a+b = "<<a+b<<endl;
		}
		void sub()
		{
			if(a<=0 || b<=0)
				cout<<"Invalid Values."<<endl;
			else
				Simple::sub();
		}
		void mul()
		{
			if(a<=0 || b<=0)
				cout<<"Invalid Values."<<endl;
			else
				Simple::mul();
		}
		void div()
		{
			if(a<=0 || b<=0)
				cout<<"Invalid Values."<<endl;
			else
				Simple::div();
		}
};

int main()
{
	Complex obj;
	obj.inp();
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
	return 0;
}
