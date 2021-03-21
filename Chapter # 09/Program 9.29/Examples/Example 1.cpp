//Write a program that explains the concept of Default Parameter. It takes different values in function call and then displays it.

#include <iostream>
using namespace std;
void test(int n=100)
{
	cout<<"The Value of 'n' is: "<<n<<endl;
}

int main()
{
	test();
	test(02);
	test(75);
	return 0;
}
