#include<iostream>
using namespace std;

class num
{
	int x;
	int y;
public:
	num ()
	{
		x = 0;
		y = 0;
	}
	
	num(int a, int b)
	{
		x = a;
		y = b;
	}
	
	void display()
	{
		cout << "x = " << x << "\n y = " << y;
	}
	
	num operator + (num d)
	{
		num tmp;
		tmp.x = x + d.x;
		tmp.y = y + d.y;
		return tmp;
	}
};

main()
{
	num n1(10,20), n2(30,40), n3;
	n3 = n1 + n2;
	n3.display();
}
