#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main()
{
	char str[50];
	ofstream out("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Exercise Programs\\07\\sample.txt", ios::app);
	if(!out)
	{
		cout<<"Error in Opening File.";
		exit(1);
	}
	for(int i=1; i<=3; i++)
	{
		cout<<"Enter a String: ";
		gets(str);
		out<<str<<"\t";
	}
	out.close();
	return 0;
}
