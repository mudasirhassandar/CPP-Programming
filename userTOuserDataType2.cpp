#include <iostream>
using namespace std;
// user gives meter we convert it into kilometer using routine in destination class
// that means we use constructor in destination class

class Meter
{
private:
    float m;

public:
    Meter() : m(0) {}
    Meter(float meters) : m(meters) {}
    float getmeter()
    {
        return m;
    }
};
class Kilometer
{
    float km;

public:
    Kilometer() : km(0) {}
    Kilometer(Meter M)
    {
        km = M.getmeter() / 1000;
    }
    void show()
    {
        cout << "Kilometer = " << km << "km" << endl;
    }
};

int main()
{
    float meters;
    cout << "Enter meters = ";
    cin >> meters;
    Meter M(meters);
    Kilometer Km;
    Km = M;
    Km.show();

    return 0;
}