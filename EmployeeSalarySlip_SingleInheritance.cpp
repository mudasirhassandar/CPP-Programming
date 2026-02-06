#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
    string ename;
    int eid;

public:
    Employee() : ename(""), eid(0) {}
};
class Salary : public Employee
{
protected:
    float bp;
    float ap;
    float da;
    float ns;

public:
    Salary() : bp(0), ap(0), da(0), ns(0) {}
    void input()
    {
        cout << "Enter Employee Name(Don't Give space between name) = ";
        cin >> Employee::ename;
        cout << "Enter Employee ID = ";
        cin >> Employee::eid;
        cout << "Enter Basic Pay = ";
        cin >> bp;
        cout << "Enter Allowances = ";
        cin >> ap;
        cout << "Enter Deductions = ";
        cin >> da;
    }
    void display()
    {
        cout << "\n---Salary Slip---\n";
        cout << "Employee Name : " << Employee::ename << endl;
        cout << "Employee ID: " << Employee::eid << endl;
        cout << "Basic Pay : " << bp << endl;
        cout << "Allowances : " << ap << endl;
        cout << "Deductions : " << da << endl;
        ns = (bp + ap) - da;
        cout << "Net salary : " << ns << endl;
    }
};
int main()
{
    Salary E1;
    E1.input();
    E1.display();

    return 0;
}