#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
	int tmp;
	tmp= a;
	a= b;
	b= tmp;
}

int main()
{
	int x,y;
	cout<< "Enter the first number: ";
	cin>>x;
	cout<< "Enter the second number: ";
	cin>>y;
	cout<< "Before swap: " <<endl;
	cout<< "x=" <<x <<endl;
	cout<< "y=" <<y <<endl;
	swap(x,y);
	cout<< "After swapping" <<endl <<"x= " <<x <<endl << "y= " <<y <<endl;
}
