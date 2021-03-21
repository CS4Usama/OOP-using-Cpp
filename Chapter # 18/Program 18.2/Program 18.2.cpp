#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char n[20];
	ofstream file("city.txt");
	for(int i=0; i<5; i++)
	{
		cout<<"Enter the Name of any City: ";
		gets(n);
		file<<n<<endl;
	}
	file.close();
	return 0;
}
