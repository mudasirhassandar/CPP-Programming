#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number = ";
    cin >> n;

    if (n == 0)
        cout << "Entered Number is Zero...";
    else if (n > 0 && n % 2 == 0)
        cout << "Entered Number is Positive Even";
    else if (n > 0 && n % 2 != 0)
        cout << "Entered Number is Positive Odd";
    else if (n < 0 && n % 2 == 0)
        cout << "Entered Number is Negative Even";
    else if (n < 0 && n % 2 != 0)
        cout << "Entered Number is Negative Odd";
    return 0;
}