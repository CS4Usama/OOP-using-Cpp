#include <iostream>
using namespace std;
class Test
{
	private:
		int a;
	public:
		void in()
		{
			cout<<"Enter Number: ";
			cin>>a;
		}
		int out()
		{
			return a;
			//cout<<"The Value of a is: "<<a<<endl;
		}
};

int main()
{
	Test ptr1;
	Test *ptr;
	ptr = &ptr1;
	ptr->in();
	//(*ptr).out();
	cout<<"The Value of a is: "<<ptr->out()<<endl;
	return 0;
}
