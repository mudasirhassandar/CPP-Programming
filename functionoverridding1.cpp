#include <iostream>
using namespace std;
class Shape
{
public:
    void area()
    {
        cout << "--Area of Shape ";
    }
};
class Cricle : public Shape
{
private:
    float radius;

public:
    Cricle() : radius(0) {}
    void area()
    {
        cout << "Enter the Radius of circle = ";
        cin >> radius;
        Shape::area();
        cout << "Circle = " << (3.14) * (radius) * (radius) << endl;
    }
};
class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle() : length(0), breadth(0) {}
    void area()
    {
        cout << "Enter the Length of reactangle = ";
        cin >> length;
        cout << "Enter the Breadth of reactangle = ";
        cin >> breadth;
        Shape::area();
        cout << "Rectangle = " << (length) * (breadth) << endl;
    }
};
class Triangle : public Shape
{
private:
    float height;
    float base;

public:
    Triangle() : height(0), base(0) {}
    void area()
    {
        cout << "Enter the Height of Triangle = ";
        cin >> height;
        cout << "Enter the Base of Triangle = ";
        cin >> base;
        Shape::area();
        cout << "Triangle = " << 0.5 * (height) * (base) << endl;
    }
};

int main()
{
    Cricle c;
    Rectangle r;
    Triangle t;
    c.area();

    r.area();

    t.area();
    return 0;
}