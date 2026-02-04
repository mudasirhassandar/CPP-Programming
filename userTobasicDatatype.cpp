// here we use conversion routin
// In this we use constructor
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}
    void input()
    {
        cout << "Enter Feets = ";
        cin >> feet;
        cout << "Enter inches = ";
        cin >> inches;
    }
    operator float()
    {
        float ft = inches / 12;
        ft += feet;
        float meters = ft / 3.28f;
        return meters;
    }
};
int main()
{
    Distance d1;
    d1.input();
    float meters = d1;
    cout << "Distance in Meters = " << meters << "m" << endl;

    return 0;
}