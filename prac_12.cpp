#include<iostream>
using namespace std;

class student
{
    protected:
            int roll_no;
            char sname[20];
    public:
            void getdata();
            void display();
};

class artst: public student
{
    private:
            int ph;
            int hs;
            int en;
            int as;
            int total;
    public:
            void takedata();
            void ctotal();
            void showdata();
};

class scst: public student
{
    private:
            int ph;
            int ch;
            int ma;
            int en;
            int total;
    public:
        void takedata();
        void ctotal();
        void showdata();
};

void student :: getdata()
{
    cout << "Enter the Roll_no: " << endl;
    cin >> roll_no;
    cout << "Enter the name of student: " << endl;
    cin >> sname;
}

void student :: display()
{
    cout << roll_no << " \t " << sname << "\t";
}

void artst :: takedata()
{
    student :: getdata();
    cout << "Enter the marks for philosophy: " << endl;
    cin >> ph;
    cout << "Enter the marks for history: " << endl;
    cin >> hs;
    cout << "Enter the marks for English: " << endl;
    cin >> en;
    cout << "Enter the marks for Assamese: " << endl;
    cin >> as;
}

void artst :: ctotal()
{
    total = ph + hs + en + as;
}
void artst :: showdata()
{
    student :: display();
    cout << ph << "\t\t" << hs << "\t\t" << en << "\t\t" << as << "\t\t" << total << endl;
}

void scst :: takedata()
{
    student :: getdata();
    cout << "Enter the marks for Physics: " << endl;
    cin >> ph;
    cout << "Enter the marks for Chemistry: " << endl;
    cin >> ch;
    cout << "Enter the marks for Mathematics: " << endl;
    cin >> ma;
    cout << "Enter the marks for English: " << endl;
    cin >> en;
}

void scst :: ctotal()
{
    total: ph+ch+ma+en;
}

void scst :: showdata()
{
    student :: display();
    cout << ph << "\t\t" << ch << "\t\t" << ma << "\t\t" << en << "\t\t" << total << endl;
}

main()
{
    int i,n;
    artst obj[10];
    scst obj1[10];
    cout << "Enter Arts student Information: " << endl;
    cout << "Enter the number of students: ";
    cin >> n;
    for (i=0; i<n; i++)
    {
        obj[i].takedata();
    }
    for(i=0; i<n; i++)
    {
        obj[i].ctotal();
    cout << "\n Roll_no: \t Name: \t Philosophy: \t History: \t English: \t Assamese: \t Total: " << endl;
    cout << "" << endl;

    for (i=0; i<n; i++)
        obj[i].showdata();
        cout << "Enter the Science Students Information: " << endl;
        cout<< "Enter the number of Students: ";
        cin >> n;
    for (i=0; i<n; i++)
    {
        obj1[i].takedata();
    }
    for(i=0; i<n; i++)
        obj1[i].ctotal();
    cout << "\n Roll_no: \t Name: \t Physics: \t Chemistry: \t Mathematics: \t English: \t Total: " <<endl;
    cout << "" << endl;

    for(i=0; i<n; i++)
        obj1[i].showdata();
    }
}

