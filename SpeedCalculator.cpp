#include <iostream>
using namespace std;
class speed
{
private:
    float distance;
    float time;

public:
    speed() : distance(0), time(0) {}
    speed(float km, float hours) : distance(km), time(hours) {}
    void display()
    {
        cout << "Speed = " << distance / time << " km/h";
    }
};
int main()
{
    float distance, time;
    cout << "Enter Distance in kilometer = ";
    cin >> distance;
    cout << "Enter Time in hours = ";
    cin >> time;
    speed car1(distance, time);
    car1.display();

    return 0;
}