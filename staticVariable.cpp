#include <iostream>
using namespace std;
class counter
{
public:
    static int count;
    counter()
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
};
int counter::count = 0;
int main()
{
    counter c1;
    counter c2;
    counter c3;
    cout << "Total object created = " << counter::count;
    return 0;
}