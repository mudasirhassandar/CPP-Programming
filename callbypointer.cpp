// call by pointer
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(&a, &b);
    cout << "After swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}