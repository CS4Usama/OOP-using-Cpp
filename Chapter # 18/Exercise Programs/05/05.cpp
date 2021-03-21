#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main()
{
	char ch;
	ifstream in("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Exercise Programs\\05\\one.txt");
	ofstream out("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Exercise Programs\\05\\two.txt");
	if(!in)
	{
		cout<<"Error in Opening File.";
		exit(1);
	}
	while(in.get(ch),!in.eof())
		out.put(ch);
	in.close();
	out.close();
	return 0;
}
