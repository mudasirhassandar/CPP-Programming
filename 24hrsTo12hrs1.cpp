// using conversion routines (operators)
#include <iostream>

using namespace std;
class Time12
{
private:
    int hrs;
    int min;

    char p_m;

public:
    Time12() : hrs(0), min(0), p_m('p') {}
    Time12(int h, int m, char ap) : hrs(h), min(m), p_m(ap) {}
    void display()
    {
        cout << "12 Hours Time\n";
        if (hrs < 10)
            cout << "0";
        cout << hrs << ":";

        if (min < 10)
            cout << "0";
        cout << min;

        if (p_m == 'a')
            cout << "AM";
        else
            cout << "PM";
    }
};
class Time24
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time24() : hours(0), minutes(0), seconds(0) {}

    bool input()
    {
        cout << "Enter Hours (0 to 23) = ";
        cin >> hours;

        cout << "Enter Minutes (0 to 59) = ";
        cin >> minutes;

        cout << "Enter Seconds (0 to 59) = ";
        cin >> seconds;

        if (hours > 23 || minutes > 59 || seconds > 59)
        {
            cout << "Invalid Time Entered\n";
            return false;
        }

        return true;
    }
    void display()
    {
        cout << "Entered Hours Time\n";
        if (hours < 10)
            cout << "0";
        cout << hours << ":";

        if (minutes < 10)
            cout << "0";
        cout << minutes << ":";
        if (seconds < 10)
            cout << "0";
        cout << seconds;

        cout << "\n";
    }

    operator Time12()
    {
        int h = hours;
        int m = minutes;
        if (seconds > 30)
        {
            m++;
        }

        char ap;
        if (h >= 12)
        {
            ap = 'p';

            if (h > 12)
                h = h - 12;
        }
        else
        {
            ap = 'a';

            if (h == 0)
                h = 12;
        }
        return Time12(h, m, ap);
    }
};
int main()
{
    Time24 t24;

    if (!t24.input())
    {

        return 0;
    }
    t24.display();
    Time12 t12;
    t12 = t24;
    t12.display();
    return 0;
}