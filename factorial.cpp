#include <iostream>
using namespace std;
int fact(int x)
{
    if (x == 1 || x == 0)
        return 1;
    return x * fact(x - 1);
}
int main()
{
    int x;
    cout << "Enter the number = ";
    cin >> x;
    int factorial = fact(x);
    cout << "Factorial of " << x << " is " << factorial << endl;
    return 0;
}