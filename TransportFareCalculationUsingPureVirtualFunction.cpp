#include <iostream>
using namespace std;
class transport
{
public:
    virtual void fare(int distance) = 0;
};
class bus : public transport
{
public:
    void fare(int distance)
    {
        cout << "Fare of Bus = " << 2.5 * distance << endl;
    }
};
class train : public transport
{
public:
    void fare(int distance)
    {
        cout << "Fare of Train = " << 25 * distance << endl;
    }
};
class flight : public transport
{
public:
    void fare(int distance)
    {
        cout << "Fare of Flight = " << 500 * distance << endl;
    }
};
int main()
{
    transport *fare;
    bus B;
    train T;
    flight F;
    fare = &B;
    fare->fare(100);
    fare = &T;
    fare->fare(100);
    fare = &F;
    fare->fare(100);

    return 0;
}
