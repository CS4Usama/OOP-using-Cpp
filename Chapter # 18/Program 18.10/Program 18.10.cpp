#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
	int rno, marks;
	char name[20];
}s;

int main()
{
	ofstream out("students.txt", ios::binary);
	for(int i=1; i<=3; i++)
	{
		cout<<"Enter Your Roll Number: ";
		cin>>s.rno;
		cin.ignore();
		cout<<"Enter Your Name: ";
		gets(s.name);
		cout<<"Enter Your Marks: ";
		cin>>s.marks;
		cout<<endl;
		out.write((char*)&s, sizeof(s));
		//out.write(reinterpret_cast<char*>(&s), sizeof(s));
	}
	out.close();
	return 0;
}
