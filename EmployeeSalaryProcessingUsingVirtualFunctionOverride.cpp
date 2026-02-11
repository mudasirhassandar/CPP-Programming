#include <iostream>
using namespace std;

// Base Class
class Employee
{
protected:
    string name;

public:
    Employee(string n)
    {
        name = n;
    }

    // Virtual Function
    virtual void calculateSalary()
    {
        cout << "Salary not defined" << endl;
    }

    // Virtual Destructor
    virtual ~Employee() {}
};

// Derived Class: Full Time Employee
class FullTimeEmployee : public Employee
{
private:
    float monthlySalary;

public:
    FullTimeEmployee(string n, float salary) : Employee(n)
    {
        monthlySalary = salary;
    }

    void calculateSalary()
    {
        cout << "Full Time Employee: " << name << endl;
        cout << "Monthly Salary = " << monthlySalary << endl;
    }
};

// Derived Class: Part Time Employee
class PartTimeEmployee : public Employee
{
private:
    int hoursWorked;
    float ratePerHour;

public:
    PartTimeEmployee(string n, int hours, float rate) : Employee(n)
    {
        hoursWorked = hours;
        ratePerHour = rate;
    }

    void calculateSalary()
    {
        float salary = hoursWorked * ratePerHour;

        cout << "Part Time Employee: " << name << endl;
        cout << "Salary = " << salary << endl;
    }
};

// Derived Class: Intern
class Intern : public Employee
{
private:
    float stipend;

public:
    Intern(string n, float s) : Employee(n)
    {
        stipend = s;
    }

    void calculateSalary()
    {
        cout << "Intern: " << name << endl;
        cout << "Stipend = " << stipend << endl;
    }
};

// Main Function
int main()
{
    // Base class pointers
    Employee *e1;
    Employee *e2;
    Employee *e3;

    // Creating objects
    FullTimeEmployee ft("Mudasir", 50000);
    PartTimeEmployee pt("Ayaan", 80, 300);
    Intern in("Sara", 10000);

    // Assigning addresses
    e1 = &ft;
    e2 = &pt;
    e3 = &in;

    // Runtime Polymorphism
    e1->calculateSalary();
    cout << endl;

    e2->calculateSalary();
    cout << endl;

    e3->calculateSalary();

    return 0;
}
