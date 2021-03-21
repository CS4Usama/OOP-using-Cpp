#include <iostream>
using namespace std;
void tab(int n);
int main()
{
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	tab(num);
	return 0;
}

void tab(int n)
{
	for(int c=1;c<=10;c++)
		cout<<n<<" * "<<c<<" = "<<n*c<<endl;
}
