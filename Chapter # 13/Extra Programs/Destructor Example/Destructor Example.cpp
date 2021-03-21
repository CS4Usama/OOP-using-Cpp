//Write a program that explains the working of destructor. Program creates three objects through constructor and then destruct them using destructor.

#include <iostream>
using namespace std;
class Test
{
	public:
		Test()
		{
			cout<<"Object Created..."<<endl;
		}
		~Test()
		{
			cout<<"Object Destroyed..."<<endl;
		}
};

int main()
{
	Test a;
	Test b,c;
	cout<<endl;
	return 0;
}
