#include <iostream>
using namespace std;
inline int SI(float p, float r, float t)
{
    return (p * r * t) / 100;
}
int main()
{
    float initialamount;
    cout << "Enter the Initial amount = ";
    cin >> initialamount;
    float intrestrate;
    cout << "Enter the Intrest rate per month = ";
    cin >> intrestrate;
    float time;
    cout << "Enter the number of months = ";
    cin >> time;
    int simpleintrest = SI(initialamount, intrestrate, time);
    cout << "Simple Intreast = " << simpleintrest << endl;
    cout << "Final Amount = " << initialamount + simpleintrest << endl;
    return 0;
}