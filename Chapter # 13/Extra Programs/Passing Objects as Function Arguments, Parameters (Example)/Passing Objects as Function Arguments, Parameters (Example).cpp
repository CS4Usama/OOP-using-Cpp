/*Write a program that explains the concept of passing objects as function arguments in a member function. Program contains on three objects. Two objects
inputs hours and minutes and third object will display its sum in a valid format.*/

#include <iostream>
using namespace std;
class time
{
		int h, m;
	public:
		void get(int, int);
		void put(void);
		void sum(time, time);
};

void time::get(int x, int y)
{
	h=x;
	m=y;
}
void time::put(void)
{
	cout<<"Hours: "<<h<<endl;
	cout<<"Minutes: "<<m<<endl;
}
void time::sum(time t1, time t2)
{
	m = t1.m + t2.m;
	h = m / 60;
	m = m % 60;
	h = h + t1.h + t2.h;
}

int main()
{
	time t1, t2, t3;
	t1.get(3,40);
	t2.get(4,30);
	t3.sum(t1,t2);
	cout<<"1st Object:"<<endl;
	t1.put();
	cout<<endl<<"2nd Object:"<<endl;
	t2.put();
	cout<<endl<<"3rd Object (Sum of Above Both Objects):"<<endl;
	t3.put();
	return 0;
}
