#include <iostream>
using namespace std;
class yahoo
{
	private:
		static int n;
	public:
		yahoo()
		{
			n++;
		}
		void show()
		{
			cout<<"You have Created "<<n<<" Objects so far."<<endl;
		}
};
int yahoo::n = 0;

int main()
{
	yahoo a,b;
	a.show();
	yahoo c;
	a.show();
	return 0;
}
