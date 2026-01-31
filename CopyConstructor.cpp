#include <iostream>
using namespace std;
class Bill
{
private:
    float unitconsumed;

public:
    Bill() : unitconsumed(0) {}
    Bill(float uc) : unitconsumed(uc) {}
    Bill(Bill &costumer1)
    {
        unitconsumed = costumer1.unitconsumed;
    }
    int bill()
    {
        return unitconsumed * 5;
    }
};
int main()
{
    float units;
    cout << "Enter the Number of consumed  units = ";
    cin >> units;
    Bill costumer1(units);
    Bill costumer2 = costumer1;
    cout << "Bill amount of costumer1 = " << costumer1.bill() << endl;
    cout << "Bill amount of costumer2 = " << costumer2.bill() << endl;
    return 0;
}