#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char ch;
	//ifstream in("chars.txt");
	ifstream in("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Program 18.6\\chars.txt");
	
	while(!in.eof())
	{
		in.get(ch);
		if(!in.eof())
			cout<<ch<<endl;
	}
	
	/*	Solution Method 1
	for(int i=0; i<5; i++)
	{
		in.get(ch);		//in>>ch;
		cout<<ch<<endl;
	}						*/
	
	/*	Solution Method 2	//But Temporary Solution not effective
	while(!in.eof())
	{
		cout<<ch<<endl;
		in.get(ch);
	}						*/
	
	/*	Solution Method 3
	while(in.get(ch))
		cout<<ch<<endl;		*/
		
	/*	Solution Method 4
	while(in.get(ch),!in.fail())
		cout<<ch<<endl;		*/
		
	/*	Solution Method 5
	while(in.get(ch),!in.eof())
		cout<<ch<<endl;		*/
	
	
	in.close();
	return 0;
}
