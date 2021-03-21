#include <iostream>
using namespace std;
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
			cout<<"The Value of n is: "<<n<<endl;
		}
		Count operator++()
		{
			Count tmp;
			n=n+1;
			tmp.n=n;
			return tmp;
		}
		Count operator++(int)
		{
			Count tmp;
			n=n+1;
			tmp.n=n;
			return tmp;
		}
		/*Both Overloaded Functions can also be written as:
		void operator++()
		{
			n=n+1;	//can be written as:  n++;	++n;
		}
		void operator++(int)
		{
			n=n+1;	//can be written as:  n++;	++n;
		}*/
};

int main()
{
	Count x;
	x.show();
	++x;
	x++;
	x.show();
	return 0;
}
