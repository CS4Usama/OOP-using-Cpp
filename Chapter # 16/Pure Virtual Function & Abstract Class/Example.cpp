#include <iostream>
using namespace std;
class Parent
{
	public:
		 void virtual show() = 0;
};
class Child1 : public Parent
{
	public:
		void show()
		{
			cout<<"Child1 Class..."<<endl;
		}
};
class Child2 : public Parent
{
	public:
		void show()
		{
			cout<<"Child2 Class..."<<endl;
		}
};

int main()
{
	Parent *ptr[1];
	ptr[0] = new Child1;
	ptr[1] = new Child2;
	ptr[0] -> show();
	ptr[1] -> show();
	return 0;
}
