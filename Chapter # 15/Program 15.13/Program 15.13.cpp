#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Constructor of Class A..."<<endl;
		}
};
class B
{
	public:
		B()
		{
			cout<<"Constructor of Class B..."<<endl;
		}
};
class C : public A, public B
{
	public:
		C() : A(), B()
		{
			cout<<"Constructor of Class C..."<<endl;
		}
};

int main()
{
	C obj;
	return 0;
}
