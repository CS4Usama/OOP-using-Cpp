#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int n;
	ofstream out("data.txt", ios::binary);
	for(int i=1; i<=5; i++)
	{
		cout<<"Enter an Integer: ";
		cin>>n;
		out.write((char*)&n, sizeof(n));
		//out.write(reinterpret_cast<char*>(&n), sizeof(n));
	}
	out.close();
	return 0;
}
