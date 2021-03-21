#include <iostream>
using namespace std;
struct Student
{
	int r, m;
	float g;
} s;

void input(Student *p)
{
	cout<<"Enter Roll No: ";
	cin>>p->r;
	cout<<"Enter Marks: ";
	cin>>p->m;
	cout<<"Enter GPA: ";
	cin>>p->g;
	cout<<endl;
}

void output(Student *m)
{
	cout<<"Roll No: "<<m->r<<endl;
	cout<<"Marks: "<<m->m<<endl;
	cout<<"GPA: "<<m->g;
}

int main()
{
	input(&s);
	output(&s);
	return 0;
}
