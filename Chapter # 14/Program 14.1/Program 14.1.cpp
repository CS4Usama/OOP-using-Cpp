//Write a program that overloads increment operator to work with user-defined objects.

#include <iostream>
using namespace std;
int main();
class Count
{
	private:
		int n;
	public:
		Count()
		{
			n=0;
		}
		void show()
		{
			cout<<"The Value of n is = "<<n<<endl;
		}
		void operator ++()
		{
			n=n+1;	//can be written as:  n++;	++n;
		}
};

int main()
{
	Count obj;
	obj.show();
	++obj;
	obj.show();
	return 0;
}
