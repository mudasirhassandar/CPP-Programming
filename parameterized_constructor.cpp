// Cal.simple interest
#include <iostream>
using namespace std;
class interest
{
private:
    float p;
    float i;
    float t;

public:
    interest(float m, float n, float y) : p(m), i(n), t(y) {}
    void show()
    {
        float si = (p * i * t) / 100;
        cout << "Simple interest = " << si << endl;
    }
};
int main()
{
    interest mudasir(1000, 10, 6);
    interest asma(100, 20, 14);
    mudasir.show();
    asma.show();
    return 0;
}
