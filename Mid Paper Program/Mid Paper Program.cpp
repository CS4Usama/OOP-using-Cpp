/*Write a program that inputs name, age, city and address from the user and then display the values on the screen. The output should be shown like:
“Dear Your Name is Ali. Faisalabad your place of birth, your age is 25 and your address is 123 Batala Colony.” */

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
	char name[20], city[30];
	string address;
	int age;
	cout<<"Enter Your Name: ";
	cin.getline(name,20);
	cin.clear();
	cin.sync();
	cout<<"Enter Your City: ";
	cin>>city;
	cout<<"Enter Your Age: ";
	cin>>age;
	cin.ignore();
	cout<<"Enter Your Address: ";
	getline(cin,address);
	cout<<endl<<"Dear Your Name is "<<name;
	cout<<". "<<city<<" your place of birth, your age is "<<age;
	cout<<" and your address is "<<address<<".";
	return 0;
}
