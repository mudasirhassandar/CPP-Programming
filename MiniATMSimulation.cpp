#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 10000, amount;
    cout << "Your balance = 10000\n\n";

    cout << "----- MINI ATM MENU -----" << endl;
    cout << "1. Balance Inquiry" << endl;
    cout << "2. Cash Withdrawal" << endl;
    cout << "3. Cash Deposit" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice = ";
    cin >> choice;

    switch (choice)
    {
    case 1: // Balance Inquiry
        cout << "Your current balance = " << balance << endl;
        break;

    case 2: // Cash Withdrawal
        cout << "Enter amount to withdraw = ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Please collect your cash" << endl;
            cout << "Remaining balance = " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
        break;

    case 3: // Cash Deposit
        cout << "Enter amount to deposit = ";
        cin >> amount;

        balance = balance + amount;
        cout << "Amount deposited successfully" << endl;
        cout << "Updated balance = " << balance << endl;
        break;

    case 4: // Exit
        cout << "Thank you for using ATM" << endl;
        break;

    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}
