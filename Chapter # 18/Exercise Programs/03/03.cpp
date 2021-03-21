#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main()
{
	char str[100];
	ifstream in("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Exercise Programs\\03\\one.txt");
	ofstream out("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Exercise Programs\\03\\two.txt");
	if(!in)
	{
		cout<<"Error in Opening File.";
		exit(1);
	}
	while(!in.eof())
	{
		in>>str;
		out<<str<<" ";
	}
	in.close();
	out.close();
	return 0;
}
