#include<iostream>
using namespace std;

class item
{
	int number;
	float cost;
	public:
	void getdata(int a, float b);
	
	void putdata(void)
	{
		cout << "number:" <<number;
		cout << "\n" << "cost:" <<cost;
	}
};

void item :: getdata(int a, float b)
{
	 number = a;
	 cost = b;
}

int main()
{
	item x;
	cout << "\n object x" << "\n";
	x.getdata(100, 299.55);
	x.putdata();
	
	item y;
	cout << "\n object y" << "\n";
	y.getdata(200,175.00);
	y.putdata();
	
	return 0;
}
