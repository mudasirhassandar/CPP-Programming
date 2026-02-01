// overloading +
// d3 = d1+d2
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
    Distance operator+(Distance d2)
    {
        int f = feet + d2.feet;
        float inc = inches + d2.inches;
        if (inc >= 12)
        {
            int ft = inc / 12;
            f += ft;
            inc = inc - (ft * 12);
        }
        return Distance(f, inc);
    }

    void display()
    {
        cout << "D2 = " << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.input();
    d2.input();
    d3 = d1 + d2;
    d3.display();
    return 0;
}