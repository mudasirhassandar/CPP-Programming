#include <iostream>
using namespace std;

int main()
{
    int num;
    int tens, ones;

    cout << "Enter a number (0–99) = ";
    cin >> num;

    // Handle single-digit numbers
    if (num >= 0 && num <= 9)
    {
        switch (num)
        {
            case 0: cout << "Zero"; break;
            case 1: cout << "One"; break;
            case 2: cout << "Two"; break;
            case 3: cout << "Three"; break;
            case 4: cout << "Four"; break;
            case 5: cout << "Five"; break;
            case 6: cout << "Six"; break;
            case 7: cout << "Seven"; break;
            case 8: cout << "Eight"; break;
            case 9: cout << "Nine"; break;
        }
    }
    // Handle two-digit numbers
    else if (num >= 10 && num <= 99)
    {
        tens = num / 10;
        ones = num % 10;

        // Tens place
        switch (tens)
        {
            case 1:
                switch (ones)
                {
                    case 0: cout << "Ten"; break;
                    case 1: cout << "Eleven"; break;
                    case 2: cout << "Twelve"; break;
                    case 3: cout << "Thirteen"; break;
                    case 4: cout << "Fourteen"; break;
                    case 5: cout << "Fifteen"; break;
                    case 6: cout << "Sixteen"; break;
                    case 7: cout << "Seventeen"; break;
                    case 8: cout << "Eighteen"; break;
                    case 9: cout << "Nineteen"; break;
                }
                break;

            case 2: cout << "Twenty "; break;
            case 3: cout << "Thirty "; break;
            case 4: cout << "Forty "; break;
            case 5: cout << "Fifty "; break;
            case 6: cout << "Sixty "; break;
            case 7: cout << "Seventy "; break;
            case 8: cout << "Eighty "; break;
            case 9: cout << "Ninety "; break;
        }

        // Ones place (skip for 10–19)
        if (tens != 1)
        {
            switch (ones)
            {
                case 1: cout << "One"; break;
                case 2: cout << "Two"; break;
                case 3: cout << "Three"; break;
                case 4: cout << "Four"; break;
                case 5: cout << "Five"; break;
                case 6: cout << "Six"; break;
                case 7: cout << "Seven"; break;
                case 8: cout << "Eight"; break;
                case 9: cout << "Nine"; break;
            }
        }
    }
    else
    {
        cout << "Invalid input (Only 0–99 allowed)";
    }

    return 0;
}
