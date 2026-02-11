#include <iostream>
using namespace std;
class beta;
class alpha
{
private:
    int data;

public:
    alpha() : data(10) {}
    friend int add(alpha, beta);
};
class beta
{
private:
    int data;

public:
    beta() : data(12) {}
    friend int add(alpha, beta);
};
int add(alpha a, beta b)
{
    return (a.data + b.data);
}
int main()
{
    alpha a;
    beta b;
    cout << add(a, b);
    return 0;
}