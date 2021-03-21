#include <iostream>
using namespace std;
class Hello
{
	private:
		int n;
	public:
		Hello()
		{
			cout<<"Object Created..."<<endl;
		}
};

int main()
{
	Hello a, b, c;
	return 0;
}
