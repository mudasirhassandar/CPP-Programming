#include <iostream>
using namespace std;

int main()
{
    int choice, num;

    cout << "----- MENU -----" << endl;
    cout << "1. Factorial" << endl;
    cout << "2. Prime Number Check" << endl;
    cout << "3. Armstrong Number Check" << endl;
    cout << "4. Palindrome Number Check" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice = ";
    cin >> choice;

    switch (choice)
    {
        case 1:   // Factorial
        {
            int fact = 1;
            cout << "Enter a number = ";
            cin >> num;

            for (int i = 1; i <= num; i++)
            {
                fact = fact * i;
            }

            cout << "Factorial = " << fact << endl;
            break;
        }

        case 2:   // Prime check
        {
            int flag = 1;
            cout << "Enter a number = ";
            cin >> num;

            if (num <= 1)
                flag = 0;

            for (int i = 2; i <= num / 2; i++)
            {
                if (num % i == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag)
                cout << "It is a Prime number" << endl;
            else
                cout << "It is NOT a Prime number" << endl;

            break;
        }

        case 3:   // Armstrong check
        {
            int temp, sum = 0, digit;
            cout << "Enter a number = ";
            cin >> num;

            temp = num;
            while (temp != 0)
            {
                digit = temp % 10;
                sum = sum + (digit * digit * digit);
                temp = temp / 10;
            }

            if (sum == num)
                cout << "It is an Armstrong number" << endl;
            else
                cout << "It is NOT an Armstrong number" << endl;

            break;
        }

        case 4:   // Palindrome check
        {
            int temp, rev = 0, digit;
            cout << "Enter a number = ";
            cin >> num;

            temp = num;
            while (temp != 0)
            {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp = temp / 10;
            }

            if (rev == num)
                cout << "It is a Palindrome number" << endl;
            else
                cout << "It is NOT a Palindrome number" << endl;

            break;
        }

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
