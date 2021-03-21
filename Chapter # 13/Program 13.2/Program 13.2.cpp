#include <iostream>
using namespace std;
class Marks
{
	private:
		int a, b, c;
	public:
		void in()
		{
			cout<<"Enter Three Marks: ";
			cin>>a>>b>>c;
		}
		int sum()
		{
			return a+b+c;
		}
		float avg()
		{
			return (a+b+c)/3.0;
		}
};

int main()
{
	Marks obj;
	obj.in();
	cout<<"Sum: "<<obj.sum()<<endl;
	cout<<"Average: "<<obj.avg();
	return 0;
}
