#include <iostream>
using namespace std;
class BMI
{
private:
    float weight;
    float height;

public:
    BMI(int x, int y) : weight(x), height(y) {}
    void show()
    {
        float bodymassindex;
        bodymassindex = weight / (height * height);
        cout << "Body Mass Index = " << bodymassindex;
    }
};
int main()
{
    int x;
    cout << "Enter Weight = ";
    cin >> x;
    int y;
    cout << "Enter Height = ";
    cin >> y;
    BMI human(x, y);
    human.show();
    return 0;
}