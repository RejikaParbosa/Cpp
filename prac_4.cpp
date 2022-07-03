#include<iostream>
using namespace std;
class complex
{
private:
    float real;
    float imag;
public:
    void ipart();
    void rpart();
    void display();
    void print();
    friend complex add(complex , complex);
    complex operator*(complex);
};

void complex :: rpart()
{
    cout << "Enter the real part: ";
    cin >> real;
}

void complex :: ipart()
{
    cout << "Enter the imaginary part: ";
    cin >> imag;
}

void complex :: display()
{
    cout << "The sum of complex number is: " << real << "+i" << imag << endl;
}

void complex :: print()
{
    cout << "The multiplication of complex number is: " << real << "+i" << imag;
}

complex add (complex a , complex b)
{
    complex t;
    t.real = a.real + b.real;
    t.imag = a.imag + b.imag;
    return t;
}

complex complex :: operator * (complex ob)
{
    complex t;
    t.real = real * ob.real - imag * ob.imag;
    t.imag = real * ob.imag + imag * ob.real;
    return t;
}

main()
{
    complex a,b,c,d;
    a.rpart();
    a.ipart();
    b.rpart();
    b.ipart();
    c = add(a,b);
    d = a*b;
    c.display();
    d.print();
}
