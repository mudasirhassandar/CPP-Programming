#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    string name;
    string pname;

public:
    student() : name(""), pname("") {}

    void getdata()
    {
        cout << "Enter your name = ";
        getline(cin, name);

        cout << "Enter Parents name = ";
        getline(cin, pname);
    }
    void show()
    {
        cout << "Name        : " << name << endl;
        cout << "Parentage   : " << pname << endl;
    }
};

class sports : public student
{
protected:
    string sname;

public:
    sports() : sname("") {}

    void getdata()
    {
        cout << "Enter Sports name = ";
        getline(cin, sname);
    }
    void show()
    {
        cout << "Sports Name : " << sname << endl;
    }
    void getstudentdata()
    {
        student::getdata();
    }
    void showstudentdata()
    {
        student::show();
    }
};

class academics : public student
{
protected:
    float grades;

public:
    academics() : grades(0) {}

    void getdata()
    {
        cout << "Enter Your Grades = ";
        cin >> grades;
        cin.ignore(); // clear buffer
    }
    void show()
    {
        cout << "Grades      : " << grades << endl;
    }
};

class result : public sports, public academics
{
public:
    void input()
    {
        // Student data (from academics side)
        sports::getstudentdata();

        // Sports data
        sports::getdata();

        // Academic data
        academics::getdata();
    }
    void display()
    {
        sports::showstudentdata();
        sports::show();
        academics::show();
    }
};

int main()
{
    result s1;
    s1.input();
    s1.display();

    return 0;
}
