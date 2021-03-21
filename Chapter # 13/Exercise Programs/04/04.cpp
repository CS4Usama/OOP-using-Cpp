#include <iostream>
#include <string.h>
using namespace std;
class Run
{
	private:
		char n[30];
		float dis;
		static char tnam[30];
		static float tdis;
	public:
		void get();
		void show();
		void topper();
}a,b,c;
void Run::get()
{
	cin.clear();
	cin.sync();
	cout<<"Enter Runner Name: ";
	gets(n);
	cout<<"Enter Distance Covered: ";
	cin>>dis;
	if(dis > tdis)
	{
		tdis=dis;
		strcpy(tnam,n);
	}
}
void Run::show()
{
	cout<<"Runner Name: "<<n<<endl;
	cout<<"Distance Covered: "<<dis<<endl;
}
void Run::topper()
{
	cout<<endl<<tnam<<" Covered Longest Distance."<<endl;
	cout<<"The Distance is: "<<tdis<<" Miles.";
}
float Run::tdis=0;
char Run::tnam[30]="\0";

int main()
{
	a.get();
	b.get();
	c.get();
	c.topper();
	return 0;
}
