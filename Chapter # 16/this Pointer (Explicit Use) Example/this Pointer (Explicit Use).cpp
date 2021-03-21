#include <iostream>
using namespace std;
class Max
{
	int no;		//It will be private by default.
	public:
		Max(int no=0)
		{
			this -> no = no;	//Here Local Variable / Formal Parameter and Data Member have same names. So, this Pointer will be used.
			//Explicit Use of this Pointer.
		}
		Max& greater(Max& obj)
		{
			if(obj.no > no)
				return obj;
			else
				return *this;	//Explicit Use of this Pointer.
		}
		void display(void)
		{
			cout<<"Greater Value: "<<no<<endl;
			cout<<"Object Address: "<<this<<endl;
		}
};

int main()
{
	Max obj1(10), obj2(20), obj3;
	obj3 = obj1.greater(obj2);
	obj3.display();
	return 0;
}
