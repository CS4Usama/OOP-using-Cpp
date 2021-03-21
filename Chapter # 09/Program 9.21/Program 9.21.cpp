#include <iostream>
using namespace std;
int max(int arr[3][2])
{
	int m, i, j;
	m=arr[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
		{
			if(arr[i][j]>m)
				m=arr[i][j];
		}
	return m;
}

int main()
{
	int arr[3][2], i, j, m;
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
		{
			cout<<"Enter Value for num["<<i<<"]["<<j<<"]: ";
			cin>>arr[i][j];
		}
	m=max(arr);
	cout<<"The Maximum Value is: "<<m;
	return 0;
}
