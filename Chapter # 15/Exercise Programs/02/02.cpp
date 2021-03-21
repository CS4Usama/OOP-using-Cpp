#include <iostream>
using namespace std;
class LocalPhone
{
	protected:
		unsigned ph;
	public:
		void input()
		{
			cout<<"Enter Phone Number: ";
			cin>>ph;
		}
		void show()
		{
			cout<<ph;
		}
};
class NatPhone:public LocalPhone
{
	protected:
		int ccod;
	public:
		void input()
		{
			cout<<"Enter City Code: ";
			cin>>ccod;
			LocalPhone::input();
		}
		void show()
		{
			cout<<ccod<<" ";
			LocalPhone::show();
		}
};
class IntPhone:public NatPhone
{
	private:
		int ncod;
	public:
		void input()
		{
			cout<<"Enter Country Code: ";
			cin>>ncod;
			NatPhone::input();
		}
		void show()
		{
			cout<<"\n\t"<<ncod<<" ";
			NatPhone::show();
		}
};

int main()
{
	IntPhone p;
	p.input();
	p.show();
	return 0;
}
