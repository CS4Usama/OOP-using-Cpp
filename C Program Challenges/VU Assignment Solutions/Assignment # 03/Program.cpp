#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Inventory
{
	private:
        int itemID;
        char itemName[20];
        float itemPrice;
        float quantity;
        float totalPrice;
	public:
        void readItem();
        void displayItem();
        int getItemID();
        float getPrice();
        float getQuantity();
        void updateQuantity(float q);
        
};

void Inventory::readItem()
{
	cin.ignore();
	cout<<"Please Enter Item ID: ";
	cin>>itemID;
	cin.ignore();
	cout<<"Please Enter Item Name: ";
	gets(itemName);
	cout<<"Please Enter Price: ";
	cin>>itemPrice;
	cout<<"Please Enter Quantity: ";
	cin>>quantity;
}

int Inventory::getItemID()
{
	return itemID;
}

float Inventory::getPrice()
{
	return itemPrice;
}

float Inventory::getQuantity()
{
	return quantity;
}

void Inventory::updateQuantity(float q)
{
	quantity += q;displayItem();
}

void Inventory::displayItem()
{
	cout<<"Item ID: "<<itemID;
	cout<<"\t Item Name: "<<itemName;
	cout<<"\t ItemPrice: "<<itemPrice;
	cout<<"\t Quantity: "<<getQuantity();
	totalPrice = itemPrice*getQuantity();
	cout<<"\t TotalPrice: "<<totalPrice<<endl;
}


//Deleting Existing File
void deleteExistingFile()
{
	ofstream file("Inventory.txt");
	if(file)
	{
		file.close();
		remove("Inventory.txt");
	}
}

//Appending Item in File
void appendToFile()
{
	Inventory rec;
	ofstream file("Inventory.txt", ios::in | ios::out | ios::ate | ios::app);
	rec.readItem();
	file.write((char*)&rec, sizeof(rec));
	cout<<"Inventory Record(s) Added Successfully."<<endl;
	file.close();
}

//Increasing Quantity of Item
void increaseQuantity()
{
	Inventory rec;
	fstream file("Inventory.txt", ios::in | ios::out | ios::ate | ios::app);
	cin.ignore();
	int id, cnt=0, found=0, q;
	cout<<"Enter Item ID: ";
	cin>>id;
	file.seekg(0, ios::beg);
	found=0;
	cnt=0;
	while(file.read((char*)&rec, sizeof(rec)))
	{
		cnt++;
		if(id == rec.getItemID())
		{
			found=1;
			break;
		}
	}
	file.clear();
	if(found==0)
		cout<<"---Record not Found---"<<endl;
	else
	{
		int location = (cnt-1)*sizeof(rec);
		if(file.eof())
			file.clear();
		file.close();
		cout<<"Add Quantity?  ";
		cin>>q;
		file.seekp(location);
		rec.updateQuantity(q);
		file.write((char*)&rec, sizeof(rec));
		file.flush();
	}
	cout<<"Item Quantity Updated Successfully."<<endl;
	file.close();
}

//Displaying Items
void displayAll()
{
	cin.ignore();
	Inventory rec;
	ifstream file("Inventory.txt", ios::in | ios::out | ios::ate | ios::app);
	if(!file)
	{
		cout<<"ERROR IN OPENING FILE";
		exit(1);
	}
	file.seekg(0, ios::beg);
	while(file)
	{
		file.read((char*)&rec, sizeof(rec));
		if(!file.eof())
			rec.displayItem();
	}
	file.clear();
	file.close();
}


int main()
{
	deleteExistingFile();
	int id;
	char inp;
	while(1)
	{
		cout<<"ENTER CHOICE"<<endl;
		cout<<"1. ADD AN INVENTORY ITEM"<<endl;
		cout<<"2. DISPLAY FILE DATA"<<endl;
		cout<<"3. INCREASE QUANTITY"<<endl;
		int choice;
		cout<<"\nPlease Select a Choice: ";
		cin>>choice;
		cout<<endl;
		
		switch(choice)
		{
			case 1:		//Add an Inventory Item
					appendToFile();
				break;
				
			case 2:		//Display File Data
				displayAll();
				break;
				
			case 3:		//Increase Quantity
				increaseQuantity();
				break;
				
			default:
				cout<<"\tInvalid Choice. Please Choose Numbers from 1 to 3"<<endl;
		}
		
		cout<<"\nDo you want to continue?  ";
		cin>>inp;
		cout<<endl;
		if(inp=='Y' || inp=='y')
			continue;
		else
			exit(0);
	}
	return 0;
}
