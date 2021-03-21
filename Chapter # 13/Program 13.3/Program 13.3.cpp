#include <iostream>
using namespace std;
class circle
{
	private:
		int radius;
	public:
		void get_radius(float r)
		{
			radius=r;
		}
		void area()
		{
			cout<<"Area of the Circle: "<<3.14*radius*radius<<endl;
		}
		void circum()
		{
			cout<<"Circumference of Circle: "<<2*3.14*radius;
		}
};

int main()
{
	circle c;
	float rad;
	cout<<"Enter Radius of the Circle: ";
	cin>>rad;
	c.get_radius(rad);
	c.area();
	c.circum();
	return 0;
}
