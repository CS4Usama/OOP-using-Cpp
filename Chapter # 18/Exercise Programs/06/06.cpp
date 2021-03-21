#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main()
{
	char ch, a[5];
	int i=0;
	ifstream in("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Exercise Programs\\06\\test.dat");
	if(!in)
	{
		cout<<"Error in Opening File.";
		exit(1);
	}
	while(in.get(ch),!in.eof())
		a[i++] = ch;
	cout<<"Integers in Reverse Order are as Follows:"<<endl;
	for(i=4; i>=0; i--)
		cout<<a[i];
	in.close();
	return 0;
}
