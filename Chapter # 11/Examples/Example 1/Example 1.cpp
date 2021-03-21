//Write a program that displays the value and address of a constant value using memory reference concept.

#include <iostream>
using namespace std;
int main()
{
	int n=10;
	cout<<"The Value of n is: "<<n<<endl;
	cout<<"The Address of n is: "<<&n;
	return 0;
}
