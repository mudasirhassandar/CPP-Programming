#include <iostream>
using namespace std;
// user gives meter we convert it into kilometer using routine in source class
// that means we use operator in source class
class Kilometer
{
    float km;

public:
    Kilometer() : km(0) {}
    Kilometer(float k) : km(k) {}
    void show()
    {
        cout << "Kilometer = " << km << "km" << endl;
    }
};
class Meter
{
private:
    float m;

public:
    Meter() : m(0) {}
    Meter(float meters) : m(meters) {}
    operator Kilometer()
    {
        float k = m / 1000;
        return Kilometer(k);
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