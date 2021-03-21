#include <iostream>
using namespace std;
int main()
{
	int n, *ptr;
	cout<<"Enter an Integer: ";
	cin>>n;
	ptr=&n;
	cout<<"The Value of n is: "<<n<<endl;
	cout<<"The Address of n is: "<<ptr;
	return 0;
}
