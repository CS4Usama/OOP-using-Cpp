#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char ch;
	int t,v;
	t=v=0;
	ifstream in("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Program 18.6\\chars.txt");
	while(in.get(ch),!in.eof())
	{
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			v++;
		t++;
		cout<<ch<<endl;
	}
	cout<<"\nTotal Characters: "<<t;
	cout<<"\nTotal Vowels: "<<v;
	return 0;
}
