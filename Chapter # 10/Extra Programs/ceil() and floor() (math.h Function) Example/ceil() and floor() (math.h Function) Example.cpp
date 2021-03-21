//Write a program that explains the working of ceil() and floor() functions of math.h

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double d;
	cout<<"Enter a double type Value: ";
	cin>>d;
	cout<<"The Rounded Value with ceil() is: "<<ceil(d)<<endl;
	cout<<"The Rounded Value with floor() is: "<<floor(d);
	return 0;
}
