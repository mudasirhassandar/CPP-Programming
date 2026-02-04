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
    Distance(int m)
    { // important
        float ft = 3.28f * m;
        feet = (int)ft;
        inches = (ft - feet) * 12;
    }
    void show()
    {
        cout << "Your Distance in Feets and Inches " << endl;
        cout << feet << " feet " << inches << " Inches " << endl;
    }
};
int main()
{
    float meters;
    cout << "Enter Distance is Meters = ";
    cin >> meters;
    Distance d1(meters);
    d1.show();

    return 0;
}