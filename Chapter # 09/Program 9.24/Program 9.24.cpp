#include <iostream>
using namespace std;
struct time
{
	int s, m, h;
}t[2];

void add(time t1, time t2)
{
	int s, m, h, x;
	s=t1.s+t2.s;
	x=s/60;
	s%=60;
	m=t1.m+t2.m+x;
	h=t1.h+t2.h+m/60;;
	m%=60;
	cout<<endl<<"Total Time in HH MM SS Format is:\n";
	cout<<h<<"\t"<<m<<"\t"<<s;
}

int main()
{
	for(int i=0;i<=1;i++)
	{
		cout<<"Enter the Time"<<i+1<<":"<<endl;
		cout<<"Hours: ";
		cin>>t[i].h;
		cout<<"Minutes: ";
		cin>>t[i].m;
		cout<<"Seconds: ";
		cin>>t[i].s;
	}
	add(t[0],t[1]);
	return 0;
}
