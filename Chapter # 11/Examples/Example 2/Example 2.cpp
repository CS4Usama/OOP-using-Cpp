//Write a program that explains the working of void pointer by storing values of ohter variables in it.

#include <iostream>
using namespace std;
int main()
{
	int n=10;
	float f=25.18;
	char c='$';
	void *ptr;
	ptr=&n;
	cout<<"The Value of n is: "<<n<<endl;
	cout<<"The Address of n is: "<<ptr<<endl;
	ptr=&f;
	cout<<"The Value of f is: "<<f<<endl;
	cout<<"The Address of f is: "<<ptr<<endl;
	ptr=&c;
	cout<<"The Value of n is: "<<c<<endl;
	cout<<"The Address of n is: "<<ptr;
	return 0;
}
