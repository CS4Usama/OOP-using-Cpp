#include <iostream>
using namespace std;
class Parent
{
	public:
		virtual void show()
		{
			cout<<"Parent Class..."<<endl;
		}
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
	Parent *ptr[5];
	cout<<"Enter 1 for Parent Class, 2 for Child1 Class and 3 for Child2 Class."<<endl<<endl;
	int op;
	for(int i=0; i<5; i++)
	{
		cout<<"Which Class to Create: ";
		cin>>op;
		if(op==1)
		{
			ptr[i] = new Parent;
			ptr[i]->show();
		}
		else if(op==2)
		{
			ptr[i] = new Child1;
			ptr[i]->show();
		}
		else
		{
			ptr[i] = new Child2;
			ptr[i]->show();
		}
	}
	return 0;
}
