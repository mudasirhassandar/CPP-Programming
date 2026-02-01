// overloading relational operator
// is d1>d2
#include <iostream>
using namespace std;
int i = 1;
int j = 1;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}
    Distance(int f, float inc) : feet(f), inches(inc) {}

    void input()
    {

        cout << "Enter feet of " << i << " distance = ";
        cin >> feet;
        cout << "Enter inches of " << i << " distance = ";
        cin >> inches;
        i++;
    }
    bool operator>(Distance d2)
    {
        float f1 = feet + inches / 12;
        float f2 = d2.feet + d2.inches / 12;

        return (f1 > f2) ? true : false;
    }
    void display()
    {
        cout << "D" << j << " = " << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.input();
    d2.input();
    d1.display();
    d2.display();
    if (d1 > d2)
    {
        cout << "Distance 1 is Greater than Distance 2" << endl;
    }
    else
    {
        cout << "Distance 2 is Greater than Distance 1" << endl;
    }

    return 0;
}