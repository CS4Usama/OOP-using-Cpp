#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char n[25];
	ifstream file("city.txt");
	if(!file)
	{
		cout<<"File Opening Error";
		exit(1);
	}
	cout<<"The List of Cities is as follows:"<<endl<<endl;
	while(!file.eof())
	{
		file.getline(n,25);
		cout<<n<<endl;
	}
	file.close();
	return 0;
}
