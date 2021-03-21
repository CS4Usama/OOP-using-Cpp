//Program that explains the Working of Reference Variables.

#include <iostream>
using namespace std;
int main()
{
	int a=100;
	int &r=a;
	//It displays the Value of Reference Variables:
	cout<<"Value of A is: "<<a<<endl<<"Value of r is: "<<r<<endl;
	//It displays the Address of Reference Variables:
	cout<<"Address of A is: "<<&a<<endl<<"Address of r is: "<<&r;
	//As you can see both Varaibles have same Value and Address. Because they have same Single Memory Location.
	return 0;
}
