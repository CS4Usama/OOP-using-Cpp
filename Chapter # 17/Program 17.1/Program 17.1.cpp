#include <iostream>
using namespace std;
template <class Type>
Type Max(Type a, Type b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main()
{
	cout<<"Maximum of Two Integers is: "<<Max(10,20)<<endl;
	float x;
	x = Max(20.5,10.6);
	cout<<"Maximum of Two Float is: "<<x<<endl;
	char z = Max('z','h');
	cout<<"Maximum of Two Characters is: "<<z;
	return 0;
}
