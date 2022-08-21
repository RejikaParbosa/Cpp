#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
using namespace std;
class my_sqrt
{
public:
    char str[50];
    int val;
    my_sqrt()
    {
        *str = 0;
        val = 0;
    }
    my_sqrt (char *s, int p)
    {
        strcpy(str,s);
        val = p;
    }
};

main()
{
    int x;
    float y;
    try
    {
        cout << "Enter a positive number = ";
        cin >> x;
        if(x >= 0)
        {
            y = sqrt(x);
            cout << "Square Root = " << y;
        }
        else
        {
            throw my_sqrt("Square root of a negative number is not allowed ",x);
        }

    }
    catch (my_sqrt e)
    {
        cout << e.str << "";
        cout << e.val << endl;
    }
}
