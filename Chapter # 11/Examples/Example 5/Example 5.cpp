//Write a program that explains the concept of Array of Pointers.

#include <iostream>
using namespace std;
int main()
{
	int *ptr[3], a, b, c, i;
	ptr[0]= &a;
	ptr[1]= &b;
	ptr[2]= &c;
	cout<<"Enter Three Integers: ";
	cin>>a>>b>>c;
	cout<<endl<<"You Entered the Following Values:\n";
	for(i=0;i<3;i++)
		cout<<*ptr[i]<<"\t";
	return 0;
}
