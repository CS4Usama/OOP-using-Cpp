#include <iostream>
using namespace std;
struct Book
{
	char n[30];
	float p;
} r;

void dbl(Book &r)
{
	r.p=r.p*2;
}

int main()
{
	cout<<"Enter Author Name: ";
	cin.getline(r.n, 30);
	cout<<"Enter Price: ";
	cin>>r.p;
	dbl(r);
	cout<<endl<<"Name of the Author is: "<<r.n<<endl;
	cout<<"Double Price: "<<r.p;
	return 0;
}
