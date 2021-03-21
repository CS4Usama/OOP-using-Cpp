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
};

int main()
{
	Count x,y;
	x.show();
	y.show();
	y=++x;
	x.show();
	y.show();
	return 0;
}
