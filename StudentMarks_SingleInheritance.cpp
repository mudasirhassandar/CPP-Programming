#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    string name;
    int rollno;

public:
    Student() : name(""), rollno(0) {}
};
class Marks : public Student
{
protected:
    float phymarks;
    float chemarks;
    float mathmarks;

public:
    Marks() : phymarks(0), chemarks(0), mathmarks(0) {}
    void input()
    {
        cout << "Enter student Name(Don't Give space between name) = ";
        cin >> Student::name;
        cout << "Enter student Roll Number = ";
        cin >> Student::rollno;
        cout << "Enter student Physics Marks = ";
        cin >> phymarks;
        cout << "Enter student Chemistry Marks = ";
        cin >> chemarks;
        cout << "Enter student Mathematics Marks = ";
        cin >> mathmarks;
    }
    void display()
    {
        cout << "\n---Academic Report---\n";
        cout << "Name : " << Student::name << endl;
        cout << "Roll NO. : " << Student::rollno << endl;
        cout << "Physics Marks : " << phymarks << endl;
        cout << "Chemistry Marks : " << chemarks << endl;
        cout << "Mathematics Marks : " << mathmarks << endl;
        cout << "Total Marks : " << phymarks + chemarks + mathmarks << endl;
    }
};
int main()
{
    Marks M1;
    M1.input();
    M1.display();

    return 0;
}