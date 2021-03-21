#include <iostream>
using namespace std;
class Travel
{
	private:
		int km, hr;
	public:
		Travel()
		{
			km=hr=0;
		}
		void get()
		{
			cout<<"Enter Kilometers Traveled: ";
			cin>>km;
			cout<<"Enter Hours Traveled: ";
			cin>>hr;
		}
		void show()
		{
			cout<<"\nYou Traveled "<<km<<" Kilometers in "<<hr<<" Hours.\n"<<endl;
		}
		Travel add(Travel p)
		{
			Travel t;
			t.km = km + p.km;
			t.hr = hr + p.hr;
			return t;
		}
};

int main()
{
	Travel my, your, r;
	my.get();
	my.show();
	your.get();
	your.show();
	r = my.add(your);
	cout<<"Total Travelling is as Follows:";
	r.show();
	return 0;
}
