#include <iostream>
using namespace std;

class Item
{
private:
    double *price;
    int *quantity;

public:
    // Default Constructor (Dynamic)
    Item()
    {
        price = new double;
        quantity = new int;

        *price = 0;
        *quantity = 0;
    }

    // Parameterized Dynamic Constructor
    Item(double p, int q)
    {
        price = new double;
        quantity = new int;

        *price = p;
        *quantity = q;
    }

    // Function to calculate total cost
    void calculate()
    {
        double total = (*price) * (*quantity);

        cout << "Price = " << *price << endl;
        cout << "Quantity = " << *quantity << endl;
        cout << "Total Cost = " << total << endl;
    }

    // Destructor
    ~Item()
    {
        delete price;
        delete quantity;

        cout << "Memory Freed" << endl;
    }
};

int main()
{
    double p;
    int q;

    cout << "Using Default Constructor\n";

    Item item1; // Default constructor
    item1.calculate();

    cout << "\nEnter Price = ";
    cin >> p;

    cout << "Enter Quantity = ";
    cin >> q;

    cout << "\nUsing Dynamic Constructor\n";

    Item item2(p, q); // Parameterized constructor
    item2.calculate();

    return 0;
}
