#include <iostream>
using namespace std;

class Account
{
protected:
    float balance;   // Protected data

public:
    Account() : balance(0) {}
};

class SavingsAccount : public Account
{
public:
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount Deposited = " << amount << endl;
    }

    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Amount Withdrawn = " << amount << endl;
        }
    }

    void showBalance()
    {
        cout << "Current Balance = " << balance << endl;
    }
};

int main()
{
    SavingsAccount s;

    s.deposit(1000);
    s.showBalance();

    s.withdraw(300);
    s.showBalance();

    s.withdraw(800);

    return 0;
}
