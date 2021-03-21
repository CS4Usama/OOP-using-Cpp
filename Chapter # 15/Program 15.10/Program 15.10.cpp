#include <iostream>
using namespace std;
class Person
{
	protected:
		int id;
		char na[20], ad[20];
	public:
		Person()
		{
			id = 0;
			na[0] = '\0';
			ad[0] = '\0';
		}
		void inp()
		{
			cout<<"Enter Your ID: ";
			cin>>id;
			cin.ignore();
			cout<<"Enter Your Name: ";
			gets(na);
			cout<<"Enter Your Address: ";
			gets(ad);
		}
		void out()
		{
			cout<<endl<<"Personal Information:"<<endl;
			cout<<"ID = "<<id<<endl;
			cout<<"Name = "<<na<<endl;
			cout<<"Address = "<<ad<<endl;
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
		void inp()
		{
			Person::inp();
			cout<<"Enter Your Roll No: ";
			cin>>rno;
			cout<<"Enter Your Marks: ";
			cin>>marks;
		}
		void out()
		{
			Person::out();
			cout<<endl<<"Educational Information:"<<endl;
			cout<<"Roll No = "<<rno<<endl;
			cout<<"Marks = "<<marks<<endl;
		}
};
class Scholarship : public Student
{
	private:
		char sna[20];
		long am;
	public:
		void inp()
		{
			Student::inp();
			cin.clear();
			cin.sync();
			cout<<"Enter Scholarship Name: ";
			gets(sna);
			cout<<"Enter Scholarship Amount: ";
			cin>>am;
		}
		void out()
		{
			Student::out();
			cout<<endl<<"Scholarship Information:"<<endl;
			cout<<"Scholarship Name = "<<sna<<endl;
			cout<<"Scholarship Amount = Rs."<<am<<endl;
		}
};

int main()
{
	Scholarship obj;
	obj.inp();
	obj.out();
	return 0;
}
