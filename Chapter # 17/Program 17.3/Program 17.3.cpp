#include <iostream>
using namespace std;
template <class T>
T Minimum(T arr[], int n)
{
	T min = arr[0];
	for(int i=0; i<n; i++)
	{
		if(min > arr[i])
			min = arr[i];
	}
	return min;
}

int main()
{
	int iarr[] = {5,4,3,2,1};
	float farr[] = {3.3, 5.5, 2.2, 1.1, 4.4};
	char carr[] = {'z', 'y', 'c', 'b', 'a'};
	cout<<"Generic Function to find Minimum Value from Array..."<<endl<<endl;
	cout<<"Minimum Integer is:  "<<Minimum(iarr,5)<<endl;
	cout<<"Minimum Float is:  "<<Minimum(farr,5)<<endl;
	cout<<"Minimum Character is:  "<<Minimum(carr,5)<<endl;
	return 0;
}
