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
		void add(Travel p)
		{
			Travel t;
			t.km = km + p.km;
			t.hr = hr + p.hr;
			cout<<"Total Travelling is "<<t.km<<" Kilometers in "<<t.hr<<" Hours.";
		}
};

int main()
{
	Travel my, your;
	my.get();
	my.show();
	your.get();
	your.show();
	my.add(your);
	return 0;
}
