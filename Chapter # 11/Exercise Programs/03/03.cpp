#include <iostream>
using namespace std;
int main()
{
	int *ptr[5], a, b, c, d, e;
	cout<<"Enter Five Integers: ";
	cin>>a>>b>>c>>d>>e;
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	ptr[3] = &d;
	ptr[4] = &e;
	int max = *ptr[0];
	for(int i=0; i<5; i++)
		if(max < *ptr[i])
			max = *ptr[i];
	cout<<"Maximum Value is: "<<max;
	return 0;
}
