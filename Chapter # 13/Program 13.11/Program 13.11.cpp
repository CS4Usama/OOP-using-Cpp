#include <iostream>
using namespace std;
class Over
{
	private:
		int num;
		char ch;
	public:
		Over()
		{
			num=0;
			ch='x';
		}
		Over(int n, char c)
		{
			num=n;
			ch=c;
		}
		void show()
		{
			cout<<"Number: "<<num<<endl;
			cout<<"Character: "<<ch<<endl;
		}
};

int main()
{
	Over f, s(100,'p');
	cout<<"The Contents of First Object is: "<<endl;
	f.show();
	cout<<endl<<"The Contents of Second Object is: "<<endl;
	s.show();
	return 0;
}
