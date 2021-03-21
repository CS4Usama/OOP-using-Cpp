#include <iostream>
using namespace std;
long pwr(long x, long n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else
		return x*pwr(x,n-1);
}

int main()
{
	long x,n;
	cout<<"Enter Two Numbers: ";
	cin>>x>>n;
	cout<<"Answer of "<<x<<" ^ "<<n<<" is: "<<pwr(x,n);
	return 0;
}
