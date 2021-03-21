#include <iostream>
using namespace std;
struct time
{
	int hrs, min, sec;
} t;

int main()
{
	long s;
	void convert(time * , long);
	cout<<"Enter Total Number of Seconds: ";
	cin>>s;
	convert(&t, s);
	cout<<endl<<"Hours: "<<t.hrs<<"\t"<<"Minutes: "<<t.min<<"\t"<<"Seconds: "<<t.sec;
	return 0;
}

void convert(time *temp, long s)
{
	temp->sec = s%60;
	long x = s/60;
	temp->min = x%60;
	temp->hrs = x/60;
}
