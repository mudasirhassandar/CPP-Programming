#include <iostream>
using namespace std;
float area(float r)
{
    return 3.14 * r * r;
}
float area(float l, float b)
{
    return l * b;
}
float area(float n, float h, float b)
{
    return n * h * b;
}
int main()
{
    float radius;
    cout << "Enter the radius of circle = ";
    cin >> radius;
    float length;
    cout << "Enter the Length of reactangle = ";
    cin >> length;
    float breadth;
    cout << "Enter the Breadth of reactangle = ";
    cin >> breadth;
    float height;
    cout << "Enter the Height of triangle = ";
    cin >> height;
    float base;
    cout << "Enter the Base of triangle = ";
    cin >> base;
    cout << "Area of Circle = " << area(radius) << endl;
    cout << "Area of Rectangle = " << area(length, breadth) << endl;
    cout << "Area of Triangle = " << area(0.5, height, base) << endl;

    return 0;
}