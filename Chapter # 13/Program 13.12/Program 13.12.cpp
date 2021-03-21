#include <iostream>
#include <stdio.h>
using namespace std;
class Book
{
	private:
		int pg, pr;
		char t[30];
	public:
		void get()
		{
			cout<<"Enter Title: ";
			gets(t);
			cout<<"Enter Pages: ";
			cin>>pg;
			cout<<"Enter Price: ";
			cin>>pr;
		}
		void show()
		{
			cout<<"Title: "<<t<<endl;
			cout<<"Pages: "<<pg<<endl;
			cout<<"Price: "<<pr<<endl;
		}
};

int main()
{
	Book b1;
	b1.get();
	Book b2(b1);
	Book b3=b1;
	cout<<"\nThe Details of 1st Book: "<<endl;
	b1.show();
	cout<<"\nThe Details of 2nd Book: "<<endl;
	b2.show();
	cout<<"\nThe Details of 3rd Book: "<<endl;
	b3.show();
	return 0;
}
