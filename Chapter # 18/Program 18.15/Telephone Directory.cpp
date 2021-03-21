#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

class PhoneBook
{
	private:
		char name[30], phno[20];
	public:
		void getdata()
		{
			cin.ignore();
			cout<<"\tEnter Name:  ";
			gets(name);
			cout<<"\tEnter Phone Number:  ";
			gets(phno);
		}
		void showdata()
		{
			cout<<"\n\t"<<left<<setw(25)<<name;
			cout<<phno<<endl;
		}
		void update(char *nm, char *telno)
		{
			strcpy(name,nm);
			strcpy(phno,telno);
		}
		char *getname()
		{
			return name;
		}
		char *getphno()
		{
			return phno;
		}
}rec;

int main()
{
	system("color A");

	fstream file("PhoneBook.dat", ios::in | ios::out | ios::ate | ios::app | ios::binary);
	char nm[30], telno[20];
	int choice, cnt=0, found=0;
	while(1)
	{
		cout<<"\t\t\t\t ----------------------------- \n";
		cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
		cout<<"\t\t\t\t ----------------------------- \n\n";

		cout<<"\t\t\t\t\t   ============"<<endl;
		cout<<"\t\t\t\t\t*** Phone Book ***"<<endl;
		cout<<"\t\t\t\t\t   ============"<<endl<<endl;
		cout<<"\t1. Add New Record"<<endl;
		cout<<"\t2. Display All Records"<<endl;
		cout<<"\t3. Search Telephone Number"<<endl;
		cout<<"\t4. Search Person Name"<<endl;
		cout<<"\t5. Update Telephone Number"<<endl;
		cout<<"\t6. Delete an Individual Record"<<endl;
		cout<<"\t7. Delete Complete PhoneBook Records"<<endl;
		cout<<"\t8. Print Complete PhoneBook File"<<endl;
		cout<<"\t9. Exit"<<endl;
		cout<<endl<<"Enter Your Choice:  ";
		cin>>choice;
		switch(choice)
		{
			case 1:		//Add New Record
				cout<<endl;
				rec.getdata();
				file.write((char*)&rec, sizeof(rec));
				cout<<"\nRecord Added Successfully..."<<endl;
				getch();
				break;
				
			case 2:		//Display All Records
				file.seekg(0, ios::beg);
				cout<<endl<<"\t\tRecords in PhoneBook:"<<endl;
				while(file)
				{
					file.read((char*)&rec, sizeof(rec));
					if(!file.eof())
						rec.showdata();
				}
				file.clear();
				getch();
				break;
				
			case 3:		//Search Telephone Number
				cin.ignore();
				cout<<"\n\tEnter Name to Search:  ";
				gets(nm);
				file.seekg(0, ios::beg);
				found=0;
				while(file.read((char*)&rec, sizeof(rec)))
				{
					if(stricmp(nm,rec.getname())==0)
					{
						found=1;
						rec.showdata();
					}	
				}
				file.clear();
				if(found==0)
					cout<<"\n---Record not Found---"<<endl;
				getch();
				break;
				
			case 4:		//Search Person Name
				cin.ignore();
				cout<<"\n\tEnter Phone Number to Search:  ";
				gets(telno);
				found=0;
				file.seekg(0, ios::beg);
				while(file.read((char*)&rec, sizeof(rec)))
				{
					if(stricmp(telno,rec.getphno())==0)
					{
						found=1;
						rec.showdata();
					}
				}
				file.clear();
				if(found==0)
					cout<<"\n---Record not Found---"<<endl;
				getch();
				break;
				
				case 5:		//Update Telephone Number
					cin.ignore();
					cout<<"\n\tEnter Name to Search:  ";
					gets(nm);
					file.seekg(0,ios::beg);
					found=0;
					cnt=0;
					while(file.read((char*)&rec, sizeof(rec)))
					{
						cnt++;
						if(stricmp(nm,rec.getname())==0)
						{
							found=1;
							break;
						}
					}
					file.clear();
					if(found==0)
						cout<<"\n---Record not Found---"<<endl;
					else
					{
						int location = (cnt-1)*sizeof(rec);
						if(file.eof())
							file.clear();
						file.close();
						file.open("PhoneBook.dat", ios::ate | ios::in | ios::out | ios::binary);
						cout<<"\tEnter New Name:  ";
						gets(nm);
						cout<<"\tEnter New Telephone Number:  ";
						gets(telno);
						file.seekp(location);
						rec.update(nm,telno);
						file.write((char*)&rec, sizeof(rec));
						file.flush();
						cout<<"\nRecord Updated Successfully..."<<endl;
					}
					getch();
					break;
					
				case 6:		//Delete an Individual Record
					{
						file.close();
						ifstream filein;
						fstream fileout;
						filein.open("PhoneBook.dat", ios::in | ios::binary);
						cin.ignore();
						cout<<"\n\tEnter Person Name to Delete Record:  ";
						gets(nm);
						int a=0,b=0;
						if(filein)
						{
							fileout.open("temp.dat", ios::out | ios::binary);
							filein.read((char*)&rec, sizeof(rec));
							while(!filein.eof())
							{
								if(stricmp(nm,rec.getname()))
								{
								
									fileout.write((char*)&rec, sizeof(rec));
									b++;
								}
								filein.read((char*)&rec, sizeof(rec));
								a++;
							}
						}
						if(a==b)
							cout<<"\n---Record not Found---"<<endl;
						else
							cout<<"\nRecord ("<<nm<<") Deleted Successfully..."<<endl;
						filein.close();
						fileout.close();
						remove("PhoneBook.dat");
						rename("temp.dat", "PhoneBook.dat");
						file.open("PhoneBook.dat", ios::in | ios::out | ios::ate | ios::app | ios::binary);
						getch();
					}
					break;
					
				case 7:		//Delete Complete PhoneBook Records
					file.close();
					system("del PhoneBook.dat");
					cout<<"\n\tAll of Your PhoneBook Data is Removed."<<endl;
					file.open("PhoneBook.dat", ios::in | ios::out | ios::ate | ios::app | ios::binary);
					getch();
					break;
					
				case 8:		//Print Complete PhoneBook File
					system("notepad /p PhoneBook.dat");
					cout<<"\n\tYour File is Printing...."<<endl;
					getch();
					break;
					
				case 9:		//Exit
					goto out;
				
				default:
					cout<<"\n\tInvalid Choice. Please Choose Numbers from 1 to 9"<<endl;
					getch();
		}
		system("cls");
	}
	out:
		file.close();
	
	return 0;
}
