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
    counter operator++()
    {
        ++count;
        counter temp;
        temp.count = count;
        return temp;
    }
};
int main()
{
    counter c1, c2;
    cout << "Before pre increment" << endl;
    cout << "C1 = " << c1.getcount() << endl;
    cout << "C2 = " << c2.getcount() << endl;
    ++c1;
    ++c1;
    c2 = ++c1;
    cout << "After pre increment in C1" << endl;
    cout << "C1 = " << c1.getcount() << endl;
    cout << "C2 = " << c2.getcount() << endl;
}