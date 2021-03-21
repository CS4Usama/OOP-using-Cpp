#include <iostream>
using namespace std;
class Test
{
	private:
		int a;
	public:
		void in()
		{
			cout<<"Enter a Number: ";
			cin>>a;
		}
		void out()
		{
			cout<<"Entered Number is: "<<a;
		}
};

int main()
{
	Test obj;
	obj.in();
	obj.out();
	return 0;
}
