#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int n;
	char ch;
	float f;
	ifstream file("test.txt");
	if(!file)
	{
		cout<<"File Opening Error";
		exit(1);
	}
	file>>n>>ch>>f;
	cout<<"The Contents of File are as follows:"<<endl;
	cout<<n<<endl<<ch<<endl<<f;
	file.close();
	return 0;
}
