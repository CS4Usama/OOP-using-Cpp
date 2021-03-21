#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main()
{
	int num;
	ifstream file("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Exercise Programs\\01\\numbers.txt");
	if(!file)
	{
		cout<<"Error in Opening File.";
		exit(1);
	}
	cout<<"File Contains the Following Integers:"<<endl;
	for(int i=1; i<=10; i++)
	{
		file>>num;
		cout<<num<<"\t";
		if(i<10 && file.eof())
		{
			cout<<"\nFile is Finished.";
			break;
		}
	}
	file.close();
	return 0;
}
