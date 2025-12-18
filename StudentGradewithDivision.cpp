#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "Enter marks of subject 1 = ";
    cin >> m1;

    cout << "Enter marks of subject 2 = ";
    cin >> m2;

    cout << "Enter marks of subject 3 = ";
    cin >> m3;

    cout << "Enter marks of subject 4 = ";
    cin >> m4;

    cout << "Enter marks of subject 5 = ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "Percentage = " << percentage << "%" << endl;

    if (percentage >= 40)
    {
        if (percentage >= 90)
        {
            cout << "Grade A (Distinction)" << endl;
        }
        else if (percentage >= 75)
        {
            cout << "Grade B (First Division)" << endl;
        }
        else if (percentage >= 60)
        {
            cout << "Grade C (Second Division)" << endl;
        }
        else
        {
            cout << "Grade D (Pass)" << endl;
        }
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}
