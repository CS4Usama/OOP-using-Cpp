#include <iostream>
using namespace std;
int main()
{
	int num[5], sq[5], cube[5], sum[5];
	int a, total=0;
	cout<<"Numbers:\t";
	for(a=0;a<5;a++)
	{
		num[a]=a;
		cout<<num[a]<<"\t";
	}
	cout<<endl;
	cout<<"Squares:\t";
	for(a=0;a<5;a++)
	{
		sq[a]=a*a;
		cout<<sq[a]<<"\t";
	}
	cout<<endl;
	cout<<"Cubes:\t\t";
	for(a=0;a<5;a++)
	{
		cube[a]=a*a*a;
		cout<<cube[a]<<"\t";
	}
	cout<<endl;
	cout<<"Sums:\t\t";
	for(a=0;a<5;a++)
	{
		sum[a] = num[a]+sq[a]+cube[a];
		cout<<sum[a]<<"\t";
		total+=sum[a];
	}
	cout<<endl;
	cout<<"Grand Total:  "<<total;
	return 0;
}
