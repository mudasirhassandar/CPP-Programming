#include <iostream>
using namespace std;

int main()
{
    float income, tax = 0;

    cout << "Enter annual income = ";
    cin >> income;

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;
    }
    else
    {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
    }

    cout << "Taxable Income = " << income << endl;
    cout << "Tax Amount = " << tax << endl;

    return 0;
}
