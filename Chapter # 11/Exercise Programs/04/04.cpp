#include <iostream>
using namespace std;
struct Account
{
	long aid;
	long am;
}*ptr;

void inp(Account *ac, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Enter Account ID: ";
		cin>>ac->aid;
		cout<<"Enter Amount: ";
		cin>>ac->am;
		ac++;
	}
}

void out(Account *ac, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\nAccount ID: "<<ac->aid<<endl;
		cout<<"Amount: "<<ac->am<<endl;
		ac++;
	}
}

int main()
{
	int num;
	cout<<"Enter Number of Account Holders: ";
	cin>>num;
	ptr = new Account[num];
	inp(ptr,num);
	out(ptr,num);
	delete ptr;
	return 0;
}
