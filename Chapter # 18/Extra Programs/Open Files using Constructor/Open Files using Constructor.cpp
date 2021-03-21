#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char name[20];
	float val;
	ofstream objo("Output.txt");
	cout<<"Enter Item Name: ";
	gets(name);
	cout<<"Enter Item Cost: ";
	cin>>val;
	objo<<name<<endl;
	objo<<val<<endl;
	objo.close();
	ifstream obji("Output.txt");
	obji>>name;
	obji>>val;
	cout<<"Item Name: "<<name<<endl;
	cout<<"Item Cost: "<<val<<endl;
	obji.close();
	return 0;
}
