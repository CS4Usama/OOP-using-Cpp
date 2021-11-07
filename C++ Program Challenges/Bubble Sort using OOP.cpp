#include<iostream>
using namespace std;

class BubbleSort {
	int a[20];
	public:
		int *bubblesort(int *, int);
};

int* BubbleSort :: bubblesort( int a[], int n) {
	int i, j, t;
	for(i=0; i<n; i++) {
		for(j=0; j<n-i-1; j++) {
			if(a[j] > a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	return a;
}

int main() {
	cout<<"\t Bubble Sort using OOP"<<endl;
	int a[10], size, i, *sa;	// sa -> sorted array
	BubbleSort bs;
	cout<<"Enter Size of Array: ";
	cin>>size;
	cout<<"Enter Data Elements: ";
	for(i=0; i<size; i++) {
		cin>>a[i];
	}
	sa = bs.bubblesort(a,size);
	cout<<"Sorted Array: ";
	for(i=0; i<size; i++) {
		cout<<sa[i];
		cout<<"  ";
	}
	return 0;
}

