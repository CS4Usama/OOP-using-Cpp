#include <iostream>
using namespace std;
class Bank
{
	private:
		char nam[30], typ[20];
		int acc, bal;
	public:
		Bank()
		{
			cin.clear();
			cin.sync();
			cout<<"Enter Account Name: ";
			gets(nam);
			cout<<"Enter Account Number: ";
			cin>>acc;
			cin.clear();
			cin.sync();
			cout<<"Enter Account Type: ";
			gets(typ);
			cout<<"Enter Opening Balance: ";
			cin>>bal;
		}
		void deposit(int amt)
		{
			bal+=amt;
			cout<<"\nBalance after Deposit: "<<bal;
		}
		void withdraw(int amt)
		{
			if(amt > bal)
				cout<<"Not Enough Amount in Account."<<endl;
			else
				{
					bal -= amt;
					cout<<"Balance after Withdraw: "<<bal;
				}
		}
		void display()
		{
			cout<<"\n\tAccount Details:"<<endl;
			cout<<"Account Name: "<<nam<<endl;
			cout<<"Account Number: "<<acc<<endl;
			cout<<"Account Type: "<<typ<<endl;
			cout<<"Current Balance: "<<bal;
		}
		void add(Bank ac)
		{
			bal = bal+ac.bal;
		}
};

int main()
{
	Bank a,b;
	a.add(b);
	a.display();
	return 0;
}
