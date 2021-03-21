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
			cout<<"\tAccount Details:"<<endl;
			cout<<"Account Name: "<<nam<<endl;
			cout<<"Account Number: "<<acc<<endl;
			cout<<"Account Type: "<<typ<<endl;
			cout<<"Current Balance: "<<bal;
		}
};

int main()
{
	int a;
	char ch;
	Bank ac;
	do
	{
		cout<<"\nChoice List\n\n";
		cout<<"1. Deposit"<<endl;
		cout<<"2. Withdraw"<<endl;
		cout<<"3. Display Details"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"\nEnter Your Choice: ";
		cin>>ch;
		switch(ch)
		{
			case '1':
				cout<<"Enter Amount to Deposit: ";
				cin>>a;
				ac.deposit(a);
				break;
			case '2':
				cout<<"Enter Amount to Withdraw: ";
				cin>>a;
				ac.withdraw(a);
				break;
			case '3':
				ac.display();
				break;
			case '4':
				exit(1);
			default:
				cout<<"Invalid Choice";
		}
	}while(1);
	return 0;
}
