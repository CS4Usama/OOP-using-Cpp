#include <iostream>
using namespace std;
int main()
{
	int num, tot=0, *ptr;
	float avg;
	cout<<"Enter Number of Students in Class: ";
	cin>>num;
	ptr = new int[num];
	for(int i=0; i<num; i++,ptr++)
	{
		cout<<"Enter Marks: ";
		cin>>*ptr;
		tot += *ptr;
	}
	avg = tot/float(num);
	cout<<"Average Marks: "<<avg;
	delete ptr;
	return 0;
}
