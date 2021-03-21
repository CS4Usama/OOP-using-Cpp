#include <iostream>
using namespace std;
class Book
{
	private:
		int BookID, Pages;
		float Price;
	public:
		void get()
		{
			cout<<"Enter BookID: ";
			cin>>BookID;
			cout<<"Enter Pages: ";
			cin>>Pages;
			cout<<"Enter Price: ";
			cin>>Price;
		}
		void show()
		{
			cout<<"BookID: "<<BookID<<endl;
			cout<<"Pages: "<<Pages<<endl;
			cout<<"Price: "<<Price;
		}
		void set(int id, int pg, float pr)
		{
			BookID=id;
			Pages=pg;
			Price=pr;
		}
		float getPrice()
		{
			return Price;
		}
};

int main()
{
	Book b1, b2;
	b1.get();
	b2.set(2, 320, 150.75);
	cout<<"The Details of Most Costly Book is as Follows: "<<endl;
	if(b1.getPrice()>b2.getPrice())
		b1.show();
	else
		b2.show();
	return 0;
}
