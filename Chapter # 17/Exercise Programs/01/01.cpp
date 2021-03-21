#include <iostream>
using namespace std;
template <class Type>
Type Min(Type a[])
{
	Type min = a[0];
	for(int i=0; i<5; i++)
		if(a[i] < min)
			min = a[i];
	return min;
}

int main()
{
	int n[5];
	float f[5];
	cout<<"Enter Five Integers: ";
	for(int i=0; i<5; i++)
		cin>>n[i];
	cout<<"Minimum Value is: "<<Min(n)<<endl<<endl;
	cout<<"Enter Five Floating Point Numbers: ";
	for(int i=0; i<5; i++)
		cin>>f[i];
	cout<<"Minimum Value is: "<<Min(f);
	return 0;
}
