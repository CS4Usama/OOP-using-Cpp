/*Problem:-   Write a program that inputs total pages, number of pages a person reads in one day and number of days a person has read the book.
			  It displays number of pages that have been read and number of pages remaining.*/


#include <iostream>
using namespace std;
int main()
{
	int tp, nop, nod, nopr, nope;
	//tp=Total Pages of the Book, nop=Number of Pages, nod=Number of Days, nopr=Number of Readed Pages, node=Number of Remaining Pages.
	cout<<"Enter Total Pages of the Book: ";
	cin>>tp;
	cout<<"How many Pages have you read in One Day: ";
	cin>>nop;
	cout<<"How many Days have you read the Book: ";
	cin>>nod;
	nopr=nop*nod;
	cout<<"\nTotal Number of Pages that you have read: "<<nopr<<endl;
	nope=tp-nopr;
	cout<<"Remaining Pages of the Book (that is not read): "<<nope;
	return 0;
}
