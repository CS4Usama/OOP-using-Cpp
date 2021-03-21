#include <iostream>
using namespace std;
class Book
{
	protected:
		int bid;
		char bnam[30];
		float pr;
	public:
		void input()
		{
			cout<<"Enter Book ID: ";
			cin>>bid;
			cin.clear();
			cin.sync();
			cout<<"Enter Book Name: ";
			gets(bnam);
			cout<<"Enter Book Price: ";
			cin>>pr;
		}
		void show()
		{
			cout<<"Book ID: "<<bid<<endl;
			cout<<"Book Name: "<<bnam<<endl;
			cout<<"Book Price: "<<pr<<endl;
		}
};
class Writer
{
	protected:
		char nam[30], adr[50];
		int book;
		Book bk[5];
	public:
		void input()
		{
			cout<<"Enter Writer Name: ";
			gets(nam);
			cin.clear();
			cin.sync();
			cout<<"Enter Writer Address: ";
			gets(adr);
			cout<<"Enter Number of Books Written: ";
			cin>>book;
			cout<<"\n\tEnter Detail of Five Books: "<<endl;
			for(int i=0; i<5; i++)
				bk[i].input();
		}
		void show()
		{
			cout<<"\n\tWriter's Detail:"<<endl;
			cout<<"Writer's Name: "<<nam<<endl;
			cout<<"Writer's Address: "<<adr<<endl;
			cout<<"Number of Books: "<<book<<endl;
			cout<<"\n\tDetail of Five Books:"<<endl;
			for(int i=0; i<5; i++)
			{
				cout<<"\n\tBook # "<<i+1<<" Detail:"<<endl;
				bk[i].show();
			}
		}
};

int main()
{
	Writer w;
	w.input();
	w.show();
	return 0;
}
