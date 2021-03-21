#include <iostream>
using namespace std;
class Person
{
	protected:
		int id;
		char name[50], address[100];
	public:
		Person()
		{
			id=0;
			name[0]='\0';
			address[0]='\0';
		}
		void GetInfo()
		{
			cout<<"Enter Your ID: ";
			cin>>id;
			cin.ignore();
			cout<<"Enter Your Name: ";
			gets(name);
			cout<<"Enter Your Address: ";
			gets(address);
		}
		void ShowInfo()
		{
			cout<<endl<<"Your Personal Information is as follows:"<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<address<<endl;
		}
};

class Student : public Person
{
	private:
		int rno, marks;
	public:
		Student()
		{
			Person();
			rno=marks=0;
		}
		void GetEdu()
		{
			cout<<"Enter Your Roll No: ";
			cin>>rno;
			cout<<"Enter Your Marks: ";
			cin>>marks;
		}
		void ShowEdu()
		{
			cout<<endl<<"Your Educational Information is as follows:"<<endl;
			cout<<"Roll No: "<<rno<<endl;
			cout<<"Marks: "<<marks<<endl;
		}
};

int main()
{
	Student s;
	s.GetInfo();
	s.GetEdu();
	s.ShowInfo();
	s.ShowEdu();
	return 0;
}
