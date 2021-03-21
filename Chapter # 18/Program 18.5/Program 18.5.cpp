#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char str[25];
	ofstream out("strings.txt");
	ifstream in("strings.txt");
	for(int i=0; i<=5; i++)
	{
		cout<<"Enter a String: ";
		gets(str);
		out<<str<<"\n";
	}
	out.close();
	cout<<endl<<"The List of Strings is as follows:"<<endl;
	while(!in.eof())
	{
		in.getline(str,25);
		cout<<str<<endl;
	}
	in.close();
	return 0;
}
