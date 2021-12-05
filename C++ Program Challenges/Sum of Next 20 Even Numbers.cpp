#include <iostream>
using namespace std;
int main() {
	unsigned long num, sum=0;
	cout<<"Enter a Number to Sum its Onward 20 Even Numbers: ";
	cin>>num;

	// If user's input is an odd number, then we will increment 1 to make it an even number.
	if(num%2 != 0) {
		++num;
	}

	cout<<"\nSeries of Onward 20 Even Numbers:\t";
	for(int i=num; i<num+40; i+=2) {
		sum += i;		// will sum every even number on each cycle of loop
		cout<<i<<' ';	// display even number series1
	}
	cout<<"\n\nSum of All the Onward 20 Even Numbers:  "<<sum;

	return 0;
}
