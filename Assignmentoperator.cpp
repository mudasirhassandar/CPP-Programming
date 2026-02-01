// overloading +
// d1+=d2
#include <iostream>
using namespace std;
int i = 1;
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
    Distance operator+=(Distance d2)
    {
        feet += d2.feet;
        inches += d2.inches;
        while (inches >= 12)
        {

            inches -= 12;
            feet++;
        }
        return Distance(feet, inches);
    }

    void display()
    {
        cout << "D1 = " << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.input();
    d2.input();
    d1 += d2;
    d1.display();
    return 0;
}