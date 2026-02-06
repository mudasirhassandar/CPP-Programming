// Write a program with a Base class and a Derived class where each has constructors and
// destructors printing messages, demonstrating the order of constructor and destructor execution
// during object creation and destruction.
#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class constructor called" << endl;
    }

    ~Base()
    {
        cout << "Base class destructor called" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived class constructor called" << endl;
    }

    ~Derived()
    {
        cout << "Derived class destructor called" << endl;
    }
};

int main()
{
    Derived obj;   // Object creation

    return 0;      // Object destruction
}
