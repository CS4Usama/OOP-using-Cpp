#include <iostream>
using namespace std;
int main()
{
	int m[5], i, *ptr;
	cout<<"Enter Five Marks:\n";
	for(i=0;i<5;i++)
		cin>>m[i];
	ptr=m;
	cout<<endl<<"You Entered the Following Values:\n";
	for(i=0;i<5;i++)
		cout<<*ptr++<<"\t";
	return 0;
}
