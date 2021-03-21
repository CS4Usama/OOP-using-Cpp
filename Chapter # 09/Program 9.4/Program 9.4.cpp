#include <iostream>
using namespace std;
void val(int n);
int main()
{
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	val(num);
	return 0;
}

void val(int n)
{
	/* Another Method:
	int p=n-1;
	int s=n+1;
	cout<<"The Number before "<<n<<" is: "<<p<<endl;
	cout<<"The Number after "<<n<<" is: "<<s;*/
	
	cout<<"The Number before "<<n<<" is: "<<n-1<<endl;
	cout<<"The Number after "<<n<<" is: "<<n+1;
}
