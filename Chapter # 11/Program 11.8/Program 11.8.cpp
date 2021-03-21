#include <iostream>
using namespace std;
struct Book
{
	char athr[30];
	int pg, pr;
};

int main()
{
	Book rec, *p;
	p = &rec;
	cout<<"Enter Author Name: ";
	cin.get(p->athr, 30);
	cout<<"Enter Pages: ";
	cin>>p->pg;
	cout<<"Enter Price: ";
	cin>>p->pr;
	cout<<endl<<"Author: "<<p->athr<<endl<<"Pages: "<<p->pg<<endl<<"Price: "<<p->pr;
	return 0;
}
