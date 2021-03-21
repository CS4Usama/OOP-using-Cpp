//Write a program that explains the working of Inline Function.

#include <iostream>
using namespace std;
inline int cube(int n)
{
	return n*n*n;
}

int main()
{
	cout<<cube(3)<<endl;
	cout<<cube(5)<<endl;
	cout<<cube(9);
	return 0;
}
