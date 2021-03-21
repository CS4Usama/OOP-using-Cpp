#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char name[20];
	int val;
	ofstream objo;
	objo.open("Data.txt");
	objo<<"KeyBoard"<<endl;
	objo<<550<<endl;
	ifstream obji;
	obji.open("Data.txt");
	obji>>name;
	obji>>val;
	cout<<"Item Name: "<<name<<endl;
	cout<<"Item Cost: "<<val<<endl;
	obji.close();
	return 0;
}
