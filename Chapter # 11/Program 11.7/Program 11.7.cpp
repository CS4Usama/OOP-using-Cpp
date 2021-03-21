#include <iostream>
using namespace std;
void get(int *x)
{
	cout<<"Enter an Integer: ";
	cin>>*x;
}

void dbl(int *y)
{
	*y = *y * 2;
}

int main()
{
	int num;
	get(&num);
	cout<<"You Entered "<<num<<endl;
	dbl(&num);
	cout<<"It's Double is "<<num;
	return 0;
}
