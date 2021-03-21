#include <iostream>
using namespace std;
class Number
{
	private:
		int a, b;
	public:
		Number()
		{
			a=b=100;
		}
		void avg()
		{
			cout<<"1st Number: "<<a<<endl;
			cout<<"2nd Number: "<<b<<endl;
			cout<<"Average of Both Numbers: "<<(a+b)/2;
		}
};

int main()
{
	Number n;
	n.avg();
	return 0;
}
