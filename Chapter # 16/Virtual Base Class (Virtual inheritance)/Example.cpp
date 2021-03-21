#include <iostream>
using namespace std;
class Parent
{
	protected:
		int n;
};
class Child1 : virtual public Parent
{
};
class Child2 : public virtual Parent
{
};
class Baby : public Child1, public Child2
{
	public:
		void set()
		{
			n = 10;
			cout<<"n = "<<n<<endl;
		}
};

int main()
{
	Baby obj;
	obj.set();
	return 0;
}
