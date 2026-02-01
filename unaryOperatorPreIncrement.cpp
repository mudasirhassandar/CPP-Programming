#include <iostream>
using namespace std;
class counter
{
private:
    int count;

public:
    counter() : count(0) {}
    int getcount()
    {
        return count;
    }
    void operator++()
    {
        ++count;
    }
};
int main()
{
    counter c1, c2;
    cout << "Before pre increment" << endl;
    cout << "C1 = " << c1.getcount() << endl;
    cout << "C2 = " << c2.getcount() << endl;
    ++c1;
    ++c2;
    ++c2;
    cout << "After pre increment" << endl;
    cout << "C1 = " << c1.getcount() << endl;
    cout << "C2 = " << c2.getcount() << endl;
}