#include <iostream>
using namespace std;
void get(int *p, int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		cout<<"Enter an Integer: ";
		cin>>*p++;
	}
}

int main()
{
	int n, j, *p;
	cout<<"Enter the Length of Array: ";
	cin>>n;
	p=new int[n];
	get(p,n);
	cout<<endl<<"You Entered the Following Values:\n";
	for(j=0;j<n;j++)
		cout<<*p++<<"\t";
	delete[] p;
	return 0;
}
