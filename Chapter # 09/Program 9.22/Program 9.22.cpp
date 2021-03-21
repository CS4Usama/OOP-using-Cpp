#include <iostream>
using namespace std;
struct Test
{
	int m;
	char g;
}t;

void fun(Test t)
{
	cout<<"Marks: "<<t.m<<endl;
	cout<<"Grade: "<<t.g;
}

int main()
{
	cout<<"Enter Marks: ";
	cin>>t.m;
	cout<<"Enter Grade: ";
	cin>>t.g;
	fun(t);
	return 0;
}
