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
    cout << "Enter the Roll_no: ";
    cin >> roll_no;
    cout << "Enter the name of student: ";
    cin >> sname;
}

void student :: display()
{
    cout <<roll_no<<"\t\t"<<sname<<"\t";
}

void artst :: takedata()
{
    student :: getdata();
    cout << "Enter the marks for philosophy: ";
    cin >> ph;
    cout << "Enter the marks for history: ";
    cin >> hs;
    cout << "Enter the marks for English: ";
    cin >> en;
    cout << "Enter the marks for Assamese: ";
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
    cout << "Enter the marks for Physics: ";
    cin >> ph;
    cout << "Enter the marks for Chemistry: ";
    cin >> ch;
    cout << "Enter the marks for Mathematics: ";
    cin >> ma;
    cout << "Enter the marks for English: ";
    cin >> en;
}

void scst :: ctotal()
{
    total= ph + ch + ma + en;
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
    cout << "\tEnter Arts student Information" << endl;
    cout << "Enter the number of students: ";
    cin >> n;
    for (i=0; i<n; i++)
    {
        obj[i].takedata();
    }
    for(i=0; i<n; i++)
    {
        obj[i].ctotal();
    cout << "\nRoll_no:\tName:\tPhilosophy:\tHistory:\tEnglish:\tAssamese:\tTotal: " << endl;
    cout << "" << endl;

    for (i=0; i<n; i++)
        obj[i].showdata();
        cout << "\n\tEnter the Science Students Information" << endl;
        cout<< "Enter the number of Students: ";
        cin >> n;
    for (i=0; i<n; i++)
    {
        obj1[i].takedata();
    }
    for(i=0; i<n; i++)
        obj1[i].ctotal();
    cout << "\nRoll_no:\tName:\tPhysics:\tChemistry:\tMathematics:\tEnglish:\tTotal: " <<endl;
    cout << "" << endl;

    for(i=0; i<n; i++)
        obj1[i].showdata();
    }
}

