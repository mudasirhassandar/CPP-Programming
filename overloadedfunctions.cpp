#include <iostream>
#include <string>
using namespace std;
void display(int a)
{
    cout << "Interger = " << a << endl;
}
void display(float a)
{
    cout << "Float = " << a << endl;
}
void display(string a)
{
    cout << "String = " << a << endl;
}

int main()
{
    display(10);
    display(11.5f);
    display("Mudasir");

    return 0;
}