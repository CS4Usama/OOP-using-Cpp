#include <iostream>
using namespace std;
class Time
{
	private:
		int h, m, s;
	public:
		Time()
		{
			h=m=s=0;
		}
		Time(int hh, int mm, int ss)
		{
			h = hh;
			m = mm;
			s = ss;
		}
		void operator++(int)
		{
			if(m==59)
			{
				m=0;
				h++;
			}
			else
				m++;
		}
		void operator--(int)
		{
			if(m==0)
			{
				m=59;
				h--;
			}
			else
				m--;
		}
		void show()
		{
			cout<<h<<":"<<m<<":"<<s<<endl;
		}
};

int main()
{
	Time x(10,50,50);
	x.show();
	x++;
	x.show();
	x--;
	x.show();
	return 0;
}
