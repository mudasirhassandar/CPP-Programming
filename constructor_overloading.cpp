#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int width;

public:
    rectangle(int x, int y) : length(x), width(y) {}
    rectangle(int x) : length(x), width(x * x) {}
    void show()
    {
        int area = length * width;
        int perimeter = 2 * (length + width);
        cout << "Area = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;
    }
};
int main()
{
    rectangle r1(10, 30);
    r1.show();
    rectangle r2(5);
    r2.show();
    return 0;
}