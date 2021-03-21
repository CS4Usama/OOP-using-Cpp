//Write a program that explains the concept of static function. Program initialize a static data member and display its value using static function.

#include <iostream>
using namespace std;
class Test
{
	private:
		static int n;
	public:
		static void show()
		{
			cout<<"The Value of n is: "<<n;
		}
};
int Test::n = 10;

int main()
{
	Test::show();
	return 0;
}
