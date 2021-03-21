#include <iostream>
using namespace std;
class Array
{
	private:
		int a[5];
	public:
		void fill();
		void display();
		int max();
		int min();
};

void Array::fill()
{
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Integer["<<i<<"]: ";
		cin>>a[i];
	}
}
void Array::display()
{
	for(int i=0;i<5;i++)
		cout<<"Integer["<<i<<"]: "<<a[i]<<endl;
}
int Array::max()
{
	int m=a[0];
	for(int i=0;i<5;i++)
		if(m<a[i])
			m=a[i];
	return m;
}
int Array::min()
{
	int m=a[0];
	for(int i=0;i<5;i++)
		if(m>a[i])
			m=a[i];
	return m;
}

int main()
{
	Array obj;
	obj.fill();
	cout<<endl<<"You have Entered the Following Integer Values:"<<endl;
	obj.display();
	cout<<endl<<"Maximum Value: "<<obj.max()<<endl;
	cout<<"Minimum Value: "<<obj.min();
	return 0;
}
