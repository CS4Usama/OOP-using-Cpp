#include <iostream>
using namespace std;
class Result
{
	private:
		int marks[3];
	public:
		void in()
		{
			for(int i=0; i<3; i++)
			{
				cout<<"Enter Marks: ";
				cin>>marks[i];
			}
		}
		void show()
		{
			int t=0;
			cout<<endl<<"Result Card:"<<endl;
			for(int i=0; i<3; i++)
			{
				cout<<"Marks: "<<marks[i]<<endl;
				t=t+marks[i];
			}
			cout<<"Total Marks: "<<t<<endl;
			cout<<"Average Marks: "<<float(t)/3;
		}
};
class Student
{
	private:
		int rno;
		char name[20];
		Result res;
	public:
		void in()
		{
			cout<<"Enter Your Roll No: ";
			cin>>rno;
			cin.ignore();
			cout<<"Enter Your Name: ";
			gets(name);
			res.in();
		}
		void show()
		{
			cout<<endl<<"Personal Information:"<<endl;
			cout<<"Roll No: "<<rno<<endl;
			cout<<"Name: "<<name<<endl;
			res.show();
		}
};

int main()
{
	Student obj;
	obj.in();
	obj.show();
	return 0;
}
