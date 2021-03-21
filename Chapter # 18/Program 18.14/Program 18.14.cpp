#include <iostream>
#include <fstream>
using namespace std;

class Country
{
	private:
		int id;
		char name[30];
	public:
		void show()
		{
			cout<<"Country ID: "<<id<<endl;
			cout<<"Country Name: "<<name<<endl;
		}
}cn;

int main()
{
	ifstream in("D:\\ADP-CS, Section-C (2019-2021) GCUF UCC\\C++ Book Program Collection\\Chapter # 18\\Program 18.13\\Country.txt", ios::binary);
	in.read((char*)&cn, sizeof(Country));
	cn.show();
	in.close();
	return 0;
}
