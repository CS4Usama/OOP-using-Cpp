#include <iostream>
using namespace std;
struct Time
{
	int s,m,h;
} t;

void set(int h, int m, int s, Time &t)
{
	t.s=s;
	t.m=m;
	t.h=h;
}

void inc(int s, Time &t)
{
	t.s+=s;
	if(t.s/60>0)
	{
		t.m+=t.s/60;
		t.s=t.s%60;
		if(t.m/60>0)
		{
			t.h+=t.m/60;
			t.m%=60;
			t.h%=24;
		}
	}
}

void disp(Time t)
{
	cout<<t.h<<":"<<t.m<<":"<<t.s<<endl;
}

int main()
{
	set(23,58,30, t);
	cout<<"Initial Time: ";
	disp(t);
	inc(30, t);
	cout<<"Time after increment of 30 Seconds: ";
	disp(t);
	inc(65, t);
	cout<<"Time after increment of 65 Seconds: ";
	disp(t);
	return 0;
}
