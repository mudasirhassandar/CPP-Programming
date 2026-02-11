#include <iostream>
using namespace std;
template <class T>
T square(T n)
{
    return n * n;
}
int main()
{

    cout << square(4) << endl;
    cout << square(4.34f) << endl;
    cout << square(4.34) << endl;
    cout << square(45555) << endl;

    return 0;
}