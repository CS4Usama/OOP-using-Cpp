#include <iostream>
using namespace std;
class Computer
{
	protected:
		int WordSize;	//bits
		int MemorySize;	//megabytes
		double StorageSize;	//megabytes
		int Speed;	//megahertz
	public:
		Computer()
		{
			//Default Constructor
		}
		Computer(int, int, double, int);
		void show();
};

class Laptop : public Computer
{
	private:
		double length, width, height, weight;
	public:
		Laptop()
		{
			//Default Constructor
		}
		Laptop(int, int, double, int, double, double, double, double);
		void show();
};
Computer::Computer(int wdsiz, int memsiz, double storsiz, int spd)
{
	WordSize = wdsiz;
	MemorySize = memsiz;
	StorageSize = storsiz;
	Speed = spd;
}
void Computer::show()
{
	cout<<"Word Size: "<<WordSize<<" Bits"<<endl;
	cout<<"Memory Size: "<<MemorySize<<" MegaBytes"<<endl;
	cout<<"Storage Size: "<<StorageSize<<" MegaBytes"<<endl;
	cout<<"Speed: "<<Speed<<" Mhz"<<endl;
}
Laptop::Laptop(int wdsiz, int memsiz, double storsiz, int spd, double len, double wid, double ht, double wt) : Computer(wdsiz, memsiz, storsiz, spd)
{
	length = len;
	width = wid;
	height = ht;
	weight = wt;
}
void Laptop::show()
{
	Computer::show();
	cout<<"Length: "<<length<<endl;
	cout<<"Width: "<<width<<endl;
	cout<<"Height: "<<height<<endl;
	cout<<"Weight: "<<weight<<endl;
}

int main()
{
	Computer comp(4, 512, 20, 2);
	Laptop lap(8, 1024, 50, 2, 15, 19, 14, 2);
	cout<<"Computer Specifications:"<<endl<<endl;
	comp.show();
	cout<<endl<<"Laptop Specifications:"<<endl<<endl;
	lap.show();
	return 0;
}
