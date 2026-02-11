#include <iostream>

using namespace std;
class shape
{
public:
    virtual void area() = 0;
};
class circle : public shape
{
private:
    float radius;

public:
    circle() : radius(0) {}
    circle(float r) : radius(r) {}
    void area()
    {
        cout << "Area of circle = " << 3.14 * radius * radius << endl;
    }
};
class rectangle : public shape
{
private:
    float length;
    float breadth;

public:
    rectangle() : length(0), breadth(0) {}
    rectangle(float l, float b) : length(l), breadth(b) {}
    void area()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};
class square : public shape
{
private:
    float side;

public:
    square() : side(0) {}
    square(float s) : side(s) {}
    void area()
    {
        cout << "Area of Square = " << side * side << endl;
    }
};

int main()
{
    shape *s;

    while (true)
    {
        int choice;
        cout << "Choose the shape for calculating Area\n1) Circle\n2) Rectangle\n3) Square\n0) exit" << endl;
        cout<<"Enter choice = ";
        cin >> choice;
        if (choice == 0)
        {
            break;
        }
        switch (choice)
        {
        case 1:
        {
            float r;
            cout << "Enter the Radius of circle = ";
            cin >> r;
            circle c(r);
            s = &c;
            s->area();
            break;
        }
        case 2:
        {
            float l;
            float b;
            cout << "Enter the Length of Rectangle = ";
            cin >> l;
            cout << "Enter the breadth of Rectangle = ";
            cin >> b;
            rectangle rec(l, b);
            s = &rec;
            s->area();
            break;
        }
        case 3:
        {
            float side;
            cout << "Enter the side of Square = ";
            cin >> side;
            square sqr(side);
            s = &sqr;
            s->area();
            break;
        }
        default:
            cout << "choose correct shape" << endl;
        }
    }
    return 0;
}