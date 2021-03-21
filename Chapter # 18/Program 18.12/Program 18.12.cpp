#include <iostream>
#include <fstream>
using namespace std;

struct Email
{
	char name[20], id[30];
}inp, disp;

int main()
{
	ofstream out;
	out.open("E-Mail.txt", ios::binary);
	cout<<"Enter Your Name: ";
	gets(inp.name);
	cout<<"Enter Your E-Mail Address: ";
	cin>>inp.id;
	out.write((char*)&inp, sizeof(inp));
	out.close();
	
	cout<<endl<<"Contents of File are as Follows:"<<endl;
	ifstream in;
	in.open("E-Mail.txt", ios::binary);
	in.read((char*)&disp, sizeof(disp));
	cout<<"\t"<<disp.name<<endl;
	cout<<"\t"<<disp.id<<endl;
	in.close();
	return 0;
}
