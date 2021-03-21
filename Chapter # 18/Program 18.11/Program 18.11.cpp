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
	ifstream in("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Program 18.10\\students.txt", ios::binary);
	while(in.read((char*)&s, sizeof(s)), !in.eof())
	{
		cout<<"Roll No: "<<s.rno<<endl;
		cout<<"Name: "<<s.name<<endl;
		cout<<"Marks: "<<s.marks<<endl;
		cout<<endl;
	}
	in.close();
	return 0;
}
