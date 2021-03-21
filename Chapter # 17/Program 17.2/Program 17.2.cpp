#include <iostream>
using namespace std;
template <class Type>
void show(Type a)
{
	cout<<a<<endl;
}

int main()
{
	show("Cyber Hawk");
	show(100);
	show(50.75);
	show('&');
	return 0;
}
