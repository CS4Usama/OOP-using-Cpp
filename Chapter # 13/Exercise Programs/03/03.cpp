#include <iostream>
using namespace std;
class DB;
class DM
{
	double met;
	long cm;
	public:
		void inp();
		void out();
		friend DM add(DM,DB);
};
class DB
{
	long feet;
	double inch;
	public:
		void inp();
		void out();
		friend DM add(DM,DB);
};
void DM::inp()
{
	cout<<"Enter Meters: ";
	cin>>met;
	cout<<"Enter Centimeters: ";
	cin>>cm;
}
void DM::out()
{
	cout<<"Distance in Meters: "<<met<<endl;
	cout<<"Distance in Centimeters: "<<cm<<endl;
}
void DB::inp()
{
	cout<<"Enter Feet: ";
	cin>>feet;
	cout<<"Enter Inches: ";
	cin>>inch;
}
void DB::out()
{
	cout<<"Distance: "<<feet<<" Feet "<<inch<<" Inches "<<endl;
}
DM add(DM a, DB b)
{
	DM t;
	t.cm = a.cm+(b.feet*12*2.54)+(b.inch*2.54);
	t.met = a.met+(t.cm/100);
	t.cm %= 100;
	return t;
}

int main()
{
	DM a,b;
	DB c;
	a.inp();
	c.inp();
	cout<<endl;
	b = add(a,c);
	b.out();
	return 0;
}
