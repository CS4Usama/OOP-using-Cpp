#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream print;
	print.open("LPT1");
	print<<"Hello Printer...\nThis is Cyber Hawk";
	cout<<"Hello Printer...\nThis is Cyber Hawk";
	print.close();
	return 0;
}
