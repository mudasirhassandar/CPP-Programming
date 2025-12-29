// celsius->farenheit
#include <iostream>
using namespace std;
class temperature
{
private:
    float celsius;
    float farenheit;

public:
    temperature(int x) : celsius(x) {}

    void output()
    {
        cout << "Celsius = " << celsius << endl;
        farenheit = (celsius * 9 / 5) + 32;
        cout << "Farenheit = " << farenheit << endl;
    }
};
int main()
{

    temperature A(22);

    temperature B(44);

    A.output();
    B.output();
}
