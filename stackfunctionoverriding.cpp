#include <iostream>
#include <cstdlib>
using namespace std;
class Stack
{
protected:
    enum
    {
        MAX = 5
    };
    int st[MAX];
    int top;

public:
    Stack() : top(-1) {}

    void push(int element)
    {
        cout << element << " Pushed\n";
        top++;
        st[top] = element;
    }
    int pop()
    {
        int temp = st[top];
        top--;
        cout << temp << " Poped\n";
        return temp;
    }
};
class Mstack : public Stack
{
public:
    void push(int element)
    {
        if (top == MAX-1)
        {
            cout << "Stack overflow" << endl;
            exit(1);
        }
        Stack::push(element);
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack underflow" << endl;
            exit(1);
        }
        return Stack::pop();
    }
};

int main()
{
    Mstack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}