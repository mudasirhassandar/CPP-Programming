#include <iostream>
using namespace std;
int main()
{
    int units;
    cout << "Enter the number of units comsumed = ";
    cin >> units;
    float bill;
    if (units <= 100)
        cout << "Your Bill = " << units * 1.5 << endl;
    if (units > 100 && units <= 200)
        cout << "Your Bill = " << (100 * 1.5) + (units - 100) * 2.5 << endl;
    if (units > 200)
        cout << "Your Bill = " << (100 * 1.5) + (100 * 2.5) + (units - 200) * 4.0 << endl;
    return 0;
}