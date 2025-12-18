#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3;

    cout << "Enter first side = ";
    cin >> s1;

    cout << "Enter second side = ";
    cin >> s2;

    cout << "Enter third side = ";
    cin >> s3;

    // Check for valid triangle
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1)
    {
        cout << "It is a valid triangle" << endl;

        // Check triangle type
        if (s1 == s2 && s2 == s3)
        {
            cout << "Triangle type: Equilateral" << endl;
        }
        else if (s1 == s2 || s1 == s3 || s2 == s3)
        {
            cout << "Triangle type: Isosceles" << endl;
        }
        else
        {
            cout << "Triangle type: Scalene" << endl;
        }

        // Check right-angled triangle
        if ((s1 * s1 == s2 * s2 + s3 * s3) ||
            (s2 * s2 == s1 * s1 + s3 * s3) ||
            (s3 * s3 == s1 * s1 + s2 * s2))
        {
            cout << "It is also a Right-angled triangle" << endl;
        }
        else
        {
            cout << "It is not a Right-angled triangle" << endl;
        }
    }
    else
    {
        cout << "It is NOT a valid triangle" << endl;
    }

    return 0;
}
