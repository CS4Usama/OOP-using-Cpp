#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char ch;
	int w=0;
	ifstream in("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Exercise Programs\\02\\sample.txt");
	while(in.get(ch),!in.eof())
	{
		if(ch==' ')
			w++;
		cout<<ch;
	}
	cout<<"\nTotal Words: "<<w+1;
	in.close();
	return 0;
}
