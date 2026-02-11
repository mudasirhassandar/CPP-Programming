#include <iostream>
#include <cstdlib>
using namespace std;
template <class T>
class Stack
{
private:
    enum
    {
        max = 5
    };
    T st[max];
    int top;

public:
    Stack() : top(-1) {}
    void push(T x)
    {
        if (top >= max - 1)
        {
            cout << "Stack is full....." << endl;
            exit(1);
        }
        top++;
        st[top] = x;
        cout << x << " is pushed\n";
    }
    T pop()
    {
        if (top < 0)
        {
            cout << "Stack is Empty....." << endl;
            exit(1);
        }
        T x = st[top];
        cout << x << " is popped" << endl;
        top--;
        return x;
    }
};
int main()
{
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();
    s.pop();

    return 0;
}