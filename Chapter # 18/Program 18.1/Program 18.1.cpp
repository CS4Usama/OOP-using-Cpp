#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int n=10;
	char ch='*';
	float f=38.125;
	ofstream obj("test.txt");
	if(!obj)
	{
		cout<<"File Opening Error";
		exit(1);
	}
	obj<<n<<"\t"<<ch<<"\t"<<f;
	obj.close();
	return 0;
}
