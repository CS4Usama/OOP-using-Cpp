#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char ch;
	ofstream out("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Exercise Programs\\04\\two.txt", ios::app);
	while(ch!='.')
	{
		cout<<"Enter a Character: ";
		cin>>ch;
		out.put(ch);
	}
	out.close();
	return 0;
}
