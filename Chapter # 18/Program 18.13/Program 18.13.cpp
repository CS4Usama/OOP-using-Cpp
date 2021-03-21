#include <iostream>
#include <fstream>
using namespace std;

class Country
{
	private:
		int id;
		char name[30];
	public:
		void get()
		{
			cout<<"Enter Country ID: ";
			cin>>id;
			cin.ignore();
			cout<<"Enter Country Name: ";
			gets(name);
		}
}cn;

int main()
{
	ofstream out("Country.txt", ios::binary);
	cn.get();
	out.write((char*)&cn, sizeof(cn));
	out.close();
	return 0;
}
