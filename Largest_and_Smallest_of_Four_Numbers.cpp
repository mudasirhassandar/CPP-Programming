#include <iostream>
using namespace std;

int main()
{
    int x, y, z, n;

    cout << "Enter first number = ";
    cin >> x;

    cout << "Enter second number = ";
    cin >> y;

    cout << "Enter third number = ";
    cin >> z;

    cout << "Enter fourth number = ";
    cin >> n;

    int greatest = x;
    int smallest = x;

    if (y > greatest)
        greatest = y;
    if (z > greatest)
        greatest = z;
    if (n > greatest)
        greatest = n;

    if (y < smallest)
        smallest = y;
    if (z < smallest)
        smallest = z;
    if (n < smallest)
        smallest = n;

    cout << "Greatest number = " << greatest << endl;
    cout << "Smallest number = " << smallest << endl;

    return 0;
}
