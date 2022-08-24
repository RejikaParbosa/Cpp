#include<iostream>
using namespace std;

class prefix
{
	int x;
	public:
		prefix()
		{
			x = 0;
		}
		
		prefix (int a)
		{
			x = a;
		}
		
		void display()
		{
			cout << "x = " << x;
		}
		
		prefix operator ++()
		{
			++x;
		}
};

main()
{
	prefix p1(10);
	++p1;
	p1.display();
}

