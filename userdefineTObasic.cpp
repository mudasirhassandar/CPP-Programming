// converting object to basic data type using conversion routine ;
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
    // float meters;
public:
    Distance() : feet(0), inches(0.0) {}
    void getdistance()
    {
        cout << "Enter Feets = ";
        cin >> feet;
        cout << "Enter Inches = ";
        cin >> inches;
    }
    operator float()
    {
        float ft = inches / 12;
        ft += feet;
        float meters = ft / 3.28F;
        return meters;
    }
};
int main()
{
    Distance d1;
    d1.getdistance();
    float meters = d1;
    cout << "Meters = " << meters << endl;
    return 0;
}