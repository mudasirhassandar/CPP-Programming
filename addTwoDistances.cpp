#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;
    int centimeter;

public:
    Distance() : meter(0), centimeter(0) {}
    Distance(int m) : meter(m), centimeter(0)
    {
    }
    Distance(int m, int cm) : meter(m), centimeter(cm)
    {
    }
    void add(Distance d1, Distance d2)
    {
        meter = d1.meter + d2.meter;
        centimeter = d1.centimeter + d2.centimeter;
        if (centimeter >= 100)
        {
            meter += centimeter / 100; // 1m = 100cm
            centimeter = centimeter % 100;
        }
    }
    void display()
    {
        cout << "Total Distance" << endl;
        cout << "Meters = " << meter << endl;
        cout << "Centimeters = " << centimeter << endl;
    }
};
int main()
{
    int m1, m2, cm;
    cout << "Enter the meters of frist distance = ";
    cin >> m1;
    cout << "Enter the meters of second distance = ";
    cin >> m2;
    cout << "Enter the Centimeters of second distance = ";
    cin >> cm;
    Distance d1(m1);
    Distance d2(m2, cm);
    Distance d3;
    d3.add(d1, d2);
    d3.display();
    return 0;
}