#include <iostream>
using namespace std;
float area(int b, int h)
{
	float ar=0.5*b*h;
	return ar;
}

int main()
{
	int b, h;
	cout<<"Enter Base of a Triangle: ";
	cin>>b;
	cout<<"Enter Height of a Triangle: ";
	cin>>h;
	float ar=area(b,h);
	cout<<"Area of the Triangle is: "<<ar;
	return 0;
}
