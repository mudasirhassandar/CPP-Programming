#include <iostream>
#include <math.h>
using namespace std;
class Compoundinterest
{
private:
    double principal;
    float rate;
    double time;
    int N;

public:
    Compoundinterest() : principal(0), rate(0), time(0), N(1) {}
    Compoundinterest(double p, double r, double t, int n = 1) : principal(p), rate(r), time(t), N(n) {}

    void calculate()
    {
        double A = principal * pow((1 + rate / (100 * N)), N * time);
        double CI = A - principal;
        cout << "Final Amount = " << A << endl;
        cout << "Compound Interest = " << CI << endl;
    }
};
int main()
{
    double p, r, t;
    int n;

    cout << "Enter Principal = ";
    cin >> p;

    cout << "Enter Rate = ";
    cin >> r;

    cout << "Enter Time (in years) = ";
    cin >> t;

    cout << "Enter Number of times compounded (Enter 0 for default) = ";
    cin >> n;
    if (n == 0)
    {
        // Uses default n = 1
        Compoundinterest c1(p, r, t);
        c1.calculate();
    }
    else
    {
        Compoundinterest c2(p, r, t, n);
        c2.calculate();
    }
    return 0;
}