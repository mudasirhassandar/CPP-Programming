#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    int age;
    string adress;
    long long phno;

public:
    Person() : name(""), age(0), adress(""), phno(0) {}
};
class Student
{
protected:
    int semister;
    string department;
    int rollno;

public:
    Student() : semister(0), department(""), rollno(0) {}
};
class Result : public Person, public Student
{
protected:
    float phymarks;
    float chemarks;
    float mathmarks;

public:
    Result() : phymarks(0), chemarks(0), mathmarks(0) {}
    void input()
    {

        cout << "Enter your Name = ";
        getline(cin, name);
        cout << "Enter Your age(only years) =  ";
        cin >> age;

        cout << "Enter your Adress = ";
        cin.ignore();
        getline(cin, adress);
        cout << "Enter your Phone Number = ";
        cin >> phno;
        cout << "Enter your Semister = ";
        cin >> semister;

        cout << "Enter your Depaetment = ";
        cin.ignore();
        getline(cin, department);
        cout << "Enter student Roll Number = ";
        cin >> rollno;
        cout << "Enter student Physics Marks = ";
        cin >> phymarks;
        cout << "Enter student Chemistry Marks = ";
        cin >> chemarks;
        cout << "Enter student Mathematics Marks = ";
        cin >> mathmarks;
    }
    void display()
    {
        cout << "\n     ---Academic Report---\n";
        cout << "Name              : " << name << endl;
        cout << "Age               : " << age << " years" << endl;
        cout << "Adress            : " << adress << endl;
        cout << "Phone number      : " << phno << endl;
        cout << "Semister          : " << semister << endl;
        cout << "Department        : " << department << endl;
        cout << "Roll NO.          : " << rollno << endl;
        cout << "Physics Marks     : " << phymarks << endl;
        cout << "Chemistry Marks   : " << chemarks << endl;
        cout << "Mathematics Marks : " << mathmarks << endl;
        cout << "Total Marks       : " << phymarks + chemarks + mathmarks << endl;
    }
};
int main()
{
    Result S1;
    S1.input();
    S1.display();

    return 0;
}
