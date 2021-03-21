#include <iostream>
using namespace std;
int main()
{
	int *p;
	p = new int;
	cout<<"Enter an Integer: ";
	cin>>*p;
	cout<<endl<<"You Entered: "<<*p<<endl;
	cout<<"It is Stored at "<<p;
	delete p;
	return 0;
}
