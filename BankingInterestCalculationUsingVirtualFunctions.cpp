#include <iostream>
using namespace std;

// Base Class
class BankAccount
{
protected:
    string name;
    float principal;
    float rate;
    int time;   // in years

public:
    BankAccount(string n, float p, float r, int t)
    {
        name = n;
        principal = p;
        rate = r;
        time = t;
    }

    // Virtual Function
    virtual void interest()
    {
        cout << "Interest not defined!" << endl;
    }

    // Virtual Destructor
    virtual ~BankAccount() {}
};

// Derived Class: Savings Account
class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(string n, float p, float r, int t)
        : BankAccount(n, p, r, t) {}

    void interest()
    {
        float si = (principal * rate * time) / 100;

        cout << "Savings Account Holder: " << name << endl;
        cout << "Simple Interest = " << si << endl;
    }
};

// Derived Class: Fixed Deposit
class FixedDeposit : public BankAccount
{
public:
    FixedDeposit(string n, float p, float r, int t)
        : BankAccount(n, p, r, t) {}

    void interest()
    {
        // Compound Interest (Yearly)
        float amount = principal;

        for (int i = 0; i < time; i++)
        {
            amount = amount + (amount * rate / 100);
        }

        float ci = amount - principal;

        cout << "Fixed Deposit Holder: " << name << endl;
        cout << "Compound Interest = " << ci << endl;
    }
};

// Derived Class: Recurring Deposit
class RecurringDeposit : public BankAccount
{
public:
    RecurringDeposit(string n, float p, float r, int t)
        : BankAccount(n, p, r, t) {}

    void interest()
    {
        // RD Interest Formula:
        // Interest = P * n(n+1)/2 * r / (12*100)

        float months = time * 12;

        float rd_interest =
            (principal * months * (months + 1) / 2 * rate) / (12 * 100);

        cout << "Recurring Deposit Holder: " << name << endl;
        cout << "Recurring Interest = " << rd_interest << endl;
    }
};

// Main Function
int main()
{
    // Base Class Pointers
    BankAccount* b1;
    BankAccount* b2;
    BankAccount* b3;

    // Creating Objects
    SavingsAccount sa("Mudasir", 50000, 4, 2);
    FixedDeposit fd("Ayaan", 100000, 6, 3);
    RecurringDeposit rd("Sara", 3000, 5, 2);

    // Assigning Addresses
    b1 = &sa;
    b2 = &fd;
    b3 = &rd;

    // Runtime Polymorphism
    b1->interest();
    cout << endl;

    b2->interest();
    cout << endl;

    b3->interest();

    return 0;
}
