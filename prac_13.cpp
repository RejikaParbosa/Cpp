#include<iostream>
using namespace std;
class printer
{
    public: virtual void display();
};

class laser_printer : public printer
{
private:
    int price;
    int speed;
public:
    void getdata()
    {
        cout << "Laser Print\n";
        cout << "Price of the Printer: ";
        cin >> price;
        cout << "Speed of the printer: ";
        cin >> speed;
    }
    void display()
    {
        cout << "The features of the printer \n";
        cout << "Price = " << "Rs:" << price << endl << "Speed = " << speed << "ppm" << endl;
    }
};

class line_printer : public printer
{
private:
    int price;
    int speed;
public:
    void getdata()
    {
        cout << "\n Line Printer \n";
        cout << "\t Price of the Printer: ";
        cin >> price;
        cout << "Speed of the Printer: ";
        cin >> speed;
    }
    void display()
    {
        cout << "The features of a printer \n";
        cout << "Price = " << "Rs: " << price << endl << "Speed = " << speed << "ppm" << endl;
    }
};

class inkjet_printer : public printer
{
private:
    int price;
    int speed;
public:
    void getdata()
    {
        cout << " \n Inkjet Printer \n";
        cout << "\t Price of the printer: ";
        cin >> price;
        cout << "\t Speed of the printer: ";
        cin >> speed;
    }
    void display()
    {
        cout << "The features of the printer \n";
        cout << "Price:" << "Rs:" << price << endl << "Speed = " << speed << "ppm" << endl;
    }
};
main()
{
    printer *p;
    laser_printer obj;
    line_printer obj1;
    inkjet_printer obj2;

    obj.getdata();
    p = &obj;
    p -> display();

    obj1.getdata();
    p = &obj1;
    p -> display();

    obj2.getdata();
    p = &obj2;
    p -> display();
}
