#include <iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"Class A"<<endl;
		}
};
class B
{
	public:
		void show()
		{
			cout<<"Class B"<<endl;
		}
};
class C : public A, public B
{
	public:
		void show()
		{
			/*  Another Method is as follows:
			    A::show();
		    	B::show();  */
			cout<<"Class C"<<endl;
		}
};

int main()
{
	C obj;
	obj.show();
	obj.A::show();
	obj.B::show();
	return 0;
}
