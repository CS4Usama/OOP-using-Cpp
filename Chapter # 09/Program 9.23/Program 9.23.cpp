#include <iostream>
using namespace std;
struct Pop
{
	char c[50];
	float p;
};
void fun(Pop, Pop);

int main()
{
	Pop a,b;
	cout<<"Enter Name and Population (in Millions): ";
	cin>>a.c>>a.p;
	cout<<"Enter Name and Population (in Millions): ";
	cin>>b.c>>b.p;
	fun(a,b);
	return 0;
}

void fun(Pop a, Pop b)
{
	cout<<"\nThe Country with More Population is:\n";
	if(a.p>b.p)
	{
		cout<<"Name: "<<a.c<<endl;
		cout<<"Population: "<<a.p<<" Millions";
	}
	else
	{
		cout<<"Name: "<<b.c<<endl;
		cout<<"Population: "<<b.p<<" Millions";
	}
}
