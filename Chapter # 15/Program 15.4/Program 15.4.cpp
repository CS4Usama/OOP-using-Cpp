#include <iostream>
using namespace std;
class Parent
{
	protected:
		int n;
	public:
		Parent(int p)
		{
			n=p;
		}
		void show()
		{
			cout<<"n = "<<n<<endl;
		}
};

class Child : public Parent
{
	private:
		char ch;
	public:
		Child(char c, int p) : Parent(p)
		{
			ch=c;
		}
		void show()
		{
			Parent::show();
			cout<<"ch = "<<ch<<endl;
		}
};

int main()
{
	Child obj('#', 137);
	obj.show();
	return 0;
}
