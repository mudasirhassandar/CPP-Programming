#include <iostream>
using namespace std;

int main()
{
    double a, b;

    try
    {
        cout << "Enter first number: ";
        cin >> a;

        if (cin.fail())
            throw "Invalid input! Enter numbers only.";

        cout << "Enter second number: ";
        cin >> b;

        if (cin.fail())
            throw "Invalid input! Enter numbers only.";

        if (b == 0)
            throw 0;

        double result = a / b;

        cout << "Result = " << result << endl;
    }

    catch (int)
    {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
