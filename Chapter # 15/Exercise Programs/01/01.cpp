#include <iostream>
using namespace std;
class Employee
{
	protected:
		int eid, scale;
	public:
		Employee()
		{
			eid=-1;
			scale=0;
		}
		void input()
		{
			cout<<"Enter Employee ID: ";
			cin>>eid;
			cout<<"Enter Scale: ";
			cin>>scale;
		}
		void show()
		{
			cout<<"Employee ID: "<<eid<<endl;
			cout<<"Scale: "<<scale<<endl;
		}
};
class Manager:public Employee
{
	private:
		int mid;
		char dept[30];
	public:
		Manager()
		{
			Employee();
			mid=0;
		}
		void input()
		{
			Employee::input();
			cout<<"Enter Manager ID: ";
			cin>>mid;
			cin.clear();
			cin.sync();
			cout<<"Enter Department: ";
			gets(dept);
		}
		void show()
		{
			Employee::show();
			cout<<"Manager ID: "<<mid<<endl;
			cout<<"Department: "<<dept;
		}
};

int main()
{
	Manager m;
	m.input();
	cout<<endl;
	m.show();
	return 0;
}
