#include <iostream>
using namespace std;
class Add
{
	private:
		int a,b;
	public:
		Add()
		{
			a=b=0;
		}
		void in()
		{
			cout<<"Enter the Value of A: ";
			cin>>a;
			cout<<"Enter the Value of B: ";
			cin>>b;
		}
		void show()
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
		Add operator +(Add p)
		{
			Add temp;
			temp.a = p.a + a;
			temp.b = p.b + b;
			return temp;
		}
};

int main()
{
	Add x, y, z;
	x.in();
	y.in();
	z=x+y;
	cout<<"\nOBJECT 1:"<<endl;
	x.show();
	cout<<"\nOBJECT 2:"<<endl;
	y.show();
	cout<<"\nSUM of Both OBJECTS:"<<endl;
	z.show();
	return 0;
}
