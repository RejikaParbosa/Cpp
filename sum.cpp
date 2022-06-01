#include<iostream>
using namespace std;
int main()
{
	int no1,no2,sum;
	float avg;
	cout<<"Enter first number:";
	cin>> no1;
	cout<<"Enter second number:";
	cin>> no2;
	sum= no1+no2;
	avg= sum/2;
	cout<<"Sum = " <<sum <<endl;
	cout<<"Average = " <<avg;
	return 0;
}
