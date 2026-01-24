#include <iostream>
#include <string>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
string add(string str1, string str2)
{
    return str1 + str2;
}
int main()
{
    cout << "A = " << add(2, 4) << endl;
    cout << "B = " << add(4, 5, 6) << endl;
    cout << "C = " << add("Mudasir", "Hassan") << endl;

    return 0;
}