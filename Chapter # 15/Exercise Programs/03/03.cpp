#include <iostream>
using namespace std;
class Teacher
{
	protected:
		char nam[30], adr[50];
		int age;
	public:
		void input()
		{
			cout<<"Enter Teacher Name: ";
			gets(nam);
			cout<<"Enter Teacher Age: ";
			cin>>age;
			cin.clear();
			cin.sync();
			cout<<"Enter Teacher Address: ";
			gets(adr);
		}
		void show()
		{
			cout<<"\n\tTeacher's Detail:"<<endl;
			cout<<"Teacher's Name: "<<nam<<endl;
			cout<<"Teacher's Age: "<<age<<endl;
			cout<<"Teacher's Address: "<<adr<<endl;
		}
};
class Writer
{
	protected:
		char nam[30], adr[50];
		int book;
	public:
		void input()
		{
			cout<<"\nEnter Writer Name: ";
			gets(nam);
			cin.clear();
			cin.sync();
			cout<<"Enter Writer Address: ";
			gets(adr);
			cout<<"Enter Number of Books Written: ";
			cin>>book;
		}
		void show()
		{
			cout<<"\n\tWriter's Detail:"<<endl;
			cout<<"Writer's Name: "<<nam<<endl;
			cout<<"Writer's Address: "<<adr<<endl;
			cout<<"Number of Books: "<<book;
		}
};
class Scholar:public Teacher, public Writer
{
	public:
		void input()
		{
			Teacher::input();
			Writer::input();
		}
		void show()
		{
			Teacher::show();
			Writer::show();
		}
}s;

int main()
{
	s.input();
	s.show();
	return 0;
}
