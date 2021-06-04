#include <iostream>
#include <stdlib.h>
using namespace std;

void showMatrix(int arr[2][2])
{
	cout<<"Matrix is:"<<endl;
	int i=0, j=0;
	while(i<2)
	{
		j=0;
		while(j<2)
		{
			cout<<arr[i][j]<<"\t";
			j++;
		}
		cout<<endl;
		i++;
	}
}

// By interchanging rows into columns or columns into rows, we'll get the transpose.
void showTranspose(int arr[2][2])
{
	cout<<"\nTranspose of the given matrix is:"<<endl;
	int i=0, j=0;
	while(i<2)
	{
		j=0;
		while(j<2)
		{
			cout<<arr[j][i]<<"\t";
			j++;
		}
		cout<<endl;
		i++;
	}
}
// OR
/*	void showTranspose(int arr[2][2])
	{
		cout<<"\nTranspose of the given matrix is:"<<endl;
		int i=0, j=0;
		while(j<2)
		{
			i=0;
			while(i<2)
			{
				cout<<arr[i][j]<<"\t";
				i++;
			}
			cout<<endl;
			j++;
		}
	}	*/


// By changing the place of diagonal elements and signs of non-diagonal elements, we'll get an adjoint.
void showAdjoint(int arr[2][2])
{
	cout<<"Adjoint of the given matrix is:"<<endl;
	cout<<arr[1][1]<<"\t"<<-arr[0][1]<<endl<<-arr[1][0]<<"\t"<<arr[0][0]<<endl;
}

// By subtracting the product of non-diagonal elements from the product of diagonal elements, we'll get a determinant.
int calculateDeterminant(int arr[2][2])
{
	return arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
}



int main()
{
	char inp;
	int arr[2][2] = { {8,-4},
					  {-6,2} };
	
//	OR
/*  int arr[2][2] = { 8,-4,
					 -6,2 }; */
	
//	OR
//	int arr[2][2] = {8,-4,-6,2};

	cout<<"Enter Your Choice:"<<endl;
	cout<<"\tPress 1 to display the Matrix and its Transpose"<<endl;
	cout<<"\tPress 2 to find Adjoint and Determinant of the matrix"<<endl;
	cout<<"\tPress any other key to exit"<<endl;
	cin>>inp;
	cout<<endl;
	
	if(inp == '1')
	{
		showMatrix(arr);
		showTranspose(arr);
	}
	else if(inp == '2')
	{
		showAdjoint(arr);
		cout<<"\nDeterminant of the given matrix is:  "<<calculateDeterminant(arr);
	}
	else
	{
		exit(0);
	}
	
	return 0;
}
