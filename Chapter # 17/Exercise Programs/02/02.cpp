#include <iostream>
using namespace std;
template <class Type>
void Reverse(Type a, Type b, Type c)
{
	cout<<"Values in Reverse Order:\t"<<c<<"\t"<<b<<"\t"<<a;
}

int main()
{
	int a,b,c;
	float d,e,f;
	cout<<"Enter Three Integers: ";
	cin>>a>>b>>c;
	Reverse(a,b,c);
	cout<<"\n\nEnter Three Floating Point Numbers: ";
	cin>>d>>e>>f;
	Reverse(d,e,f);
	return 0;
}
