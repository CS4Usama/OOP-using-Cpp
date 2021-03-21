#include <iostream>
using namespace std;

//Global Variables:
int i,j;
double per;		//Variable for Percentage

//Declaration of User-defined Functions:
void PercentageBiden(int cho, unsigned long a[3][4]);
void PercentageTrump(int cho, unsigned long a[3][4]);
void PercentageJorgenson(int cho, unsigned long a[3][4]);

void showElements(unsigned long a[3][4])
{
	cout<<"Source Data:\n"<<endl;
	cout<<"States \t\tBiden Votes \tTrump Votes \tJorgenson Votes Total Votes\n"<<endl;
	for(i=0; i<3; i++)
	{
		cout<<i+1<<"\t\t";
		for(j=0; j<4; j++)
			cout<<a[i][j]<<"\t\t";
		cout<<endl;
	}
	cout<<endl<<endl;
}


//Driver Code
int main()
{
	unsigned long arr[3][4] = { {5284453, 5658847, 70046, 11013346},
								{2465781, 2455428, 61894, 4983103},
								{2790648, 2644525, 60287, 5495460}  };
	int choice;
	showElements(arr);
	
	do
	{
		cout<<"Press the state code to calculate percentage of Trump, Biden and Jorgenson votes\n"<<endl;
		cout<<"Press 1 for Florida.\nPress 2 for Georgia.\nPress 3 for Michigan.\nPress 4 to Exit\n"<<endl;
		cout<<"Please select an option, use numbers from 1 to 4: ";
		cin>>choice;
		cout<<"___________________________________________________"<<endl;
		
		if(choice==1)
		{
			cout<<"\t Florida Results\n"<<endl;
			PercentageBiden(choice, arr);
			PercentageTrump(choice, arr);
			PercentageJorgenson(choice, arr);
		}
		else if(choice==2)
		{
			cout<<"\t Georgia Results\n"<<endl;
			PercentageBiden(choice, arr);
			PercentageTrump(choice, arr);
			PercentageJorgenson(choice, arr);
		}
		else if(choice==3)
		{
			cout<<"\t Michigan Results\n"<<endl;
			PercentageBiden(choice, arr);
			PercentageTrump(choice, arr);
			PercentageJorgenson(choice, arr);
		}
		else if(choice==4)
		{
			cout<<"\n\tThanks for using it.\n\t     Good Bye!"<<endl;
		}
		else
			cout<<"Choice should be between 1 to 4\nInvalid Choice, please select again:\n"<<endl;
	}
	while(choice!=4);
	
	return 0;
}


//Definitions of (Local) User-defined Functions:

void PercentageBiden(int cho, unsigned long a[3][4])
{
	if(cho==1)
	{
		//Explicit Casting is used to typecast long into double for decimal point value
		per = double(a[0][0]) / double(a[0][3]) * 100;
		cout<<"Percentage of Joe Biden votes is: "<<per<<endl<<endl;
	}
	else if(cho==2)
	{
		//Explicit Casting is used to typecast long into double for decimal point value
		per = double(a[1][0]) / double(a[1][3]) * 100;
		cout<<"Percentage of Joe Biden votes is: "<<per<<endl<<endl;
	}
	else if(cho==3)
	{
		//Explicit Casting is used to typecast long into double for decimal point value
		per = double(a[2][0]) / double(a[2][3]) * 100;
		cout<<"Percentage of Joe Biden votes is: "<<per<<endl<<endl;
	}
	
}


void PercentageTrump(int cho, unsigned long a[3][4])
{
	if(cho==1)
	{
		//Explicit Casting is used to typecast long into double for decimal point value
		per = double(a[0][1]) / double(a[0][3]) * 100;
		cout<<"Percentage of Donald Trump votes is: "<<per<<endl<<endl;
	}
	else if(cho==2)
	{
		per = double(a[1][1]) / double(a[1][3]) * 100;
		cout<<"Percentage of Donald Trump votes is: "<<per<<endl<<endl;
	}
	else if(cho==3)
	{
		per = double(a[2][1]) / double(a[2][3]) * 100;
		cout<<"Percentage of Donald Trump votes is: "<<per<<endl<<endl;
	}
}


void PercentageJorgenson(int cho, unsigned long a[3][4])
{
	if(cho==1)
	{
		//Explicit Casting is used to typecast long into double for decimal point value
		per = double(a[0][2]) / double(a[0][3]) * 100;
		cout<<"Percentage of Jo Jorgenson votes is: "<<per<<endl<<endl;
	}
	else if(cho==2)
	{
		per = double(a[1][2]) / double(a[1][3]) * 100;
		cout<<"Percentage of Jo Jorgenson votes is: "<<per<<endl<<endl;
	}
	else if(cho==3)
	{
		per = double(a[2][2]) / double(a[2][3]) * 100;
		cout<<"Percentage of Jo Jorgenson votes is: "<<per<<endl<<endl;
	}
}
