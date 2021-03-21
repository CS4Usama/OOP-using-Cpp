#include <iostream>
#include <stdio.h>
using namespace std;
class Result
{
	private:
		int rno, marks[3];
		char name[30];
	public:
		void input()
		{
			cout<<"Enter Roll No: ";
			cin>>rno;
			cout<<"Enter Name: ";
			gets(name);
			gets(name);
			for(int i=0;i<3;i++)
			{
				cout<<"Enter Marks["<<i<<"]: ";
				cin>>marks[i];
			}
		}
		void show()
		{
			cout<<endl<<endl<<"Roll No: "<<rno<<endl;
			cout<<"Name: "<<name<<endl;
			for(int i=0;i<3;i++)
				cout<<"Marks["<<i<<"]: "<<marks[i]<<endl;
		}
		int total()
		{
			int t=0;
			for(int i=0;i<3;i++)
				t=t+marks[i];
			return t;
		}
		float avg()
		{
			int t=0;
			for(int i=0;i<3;i++)
				t=t+marks[i];
			return t/3.0;
		}
};

int main()
{
	Result r;
	r.input();
	r.show();
	cout<<"Total Marks: "<<r.total()<<endl;
	cout<<"Average Marks: "<<r.avg();
	return 0;
}
