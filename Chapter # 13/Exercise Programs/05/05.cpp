#include <iostream>
#include <string.h>
using namespace std;
class Car
{
	private:
		char nam[30], dir;
		int pos;
	public:
		Car()
		{
			strcpy(nam,"\0");
			dir='E';
			pos=0;
		}
		void reset()
		{
			cout<<"Enter Car Name: ";
			gets(nam);
			cout<<"Enter Direction: ";
			cin>>dir;
			cout<<"Enter Position: ";
			cin>>pos;
		}
		void turn()
		{
			if(dir=='E')
				dir='N';
			else if(dir=='N')
				dir='W';
			else if(dir=='W')
				dir='S';
			else if(dir=='S')
				dir='E';
		}
		void turn(char d)
		{
			dir=d;
		}
		void move(int d)
		{
			pos += d;
		}
		void show()
		{
			cout<<"The Direction of Car is: ";
			switch(dir)
			{
				case 'E':
				case 'e':
					cout<<"East";
					break;
				case 'N':
				case 'n':
					cout<<"North";
					break;
				case 'W':
				case 'w':
					cout<<"West";
					break;
				case 'S':
				case 's':
					cout<<"South";
					break;
			}
			cout<<"\nIt is Standing at "<<pos<<" Position.";
		}
};

int main()
{
	Car x;
	x.reset();
	x.show();
	cout<<"\n\nAfter Covering Some Distance...\n\n";
	x.turn();
	x.move(100);
	x.show();
	return 0;
}
