#include <iostream>
using namespace std;
struct Book
{
	char n[30];
	int pg, pr;
} a,b,r;

Book chk(Book a, Book b)
{
	if(a.pr>b.pr)
		return a;
	else
		return b;
}

int main()
{
	cout<<"Enter Author Name: ";
	cin.getline(a.n, 30);
	cout<<"Enter Pages and Price: ";
	cin>>a.pg>>a.pr;
	cout<<"Enter Author Name: ";
	cin>>b.n;
	cout<<"Enter Pages and Price: ";
	cin>>b.pg>>b.pr;
	cout<<endl<<" >> The more Costly Book is:\n";
	r=chk(a,b);
	cout<<"Name of the Author is: "<<r.n<<endl<<"Pages: "<<r.pg<<endl<<"Price: "<<r.pr;
	return 0;
}
