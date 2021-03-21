#include <iostream>
using namespace std;
int main()
{
	char city[5][30];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter City Name: ";
		cin>>city[i];
	}
	cout<<"\nThe Name of Cities are as follows: "<<endl;
	for(int i=0; i<5; i++)
		cout<<city[i]<<endl;
	return 0;
}
