#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter number of rows =  ";
    cin >> x;
    int y;
    cout << "Enter number of colums =  ";
    cin >> y;
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "Enter " << j + 1 << " elements of " << i + 1 << " row = ";
            cin >> arr[i][j];
        }
        cout << "\n";
    }

    cout << "Your 2D array is :-\n";

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    int minr = 0;
    int maxr = x - 1;
    int minc = 0;
    int maxc = y - 1;
    int totalele = x * y;
    int count = 0;
    while (count < totalele)
    {
        for (int j = minc; j <= maxc; j++)
        {
            cout << arr[minr][j] << " ";

            count++;
        }
        minr++;
        if (count >= totalele)
            break;
        for (int i = minr; i <= maxr; i++)
        {
            cout << arr[i][maxc] << " ";

            count++;
        }
        maxc--;
        if (count >= totalele)
            break;
        for (int j = maxc; j >= minc; j--)
        {
            cout << arr[maxr][j] << " ";

            count++;
        }
        maxr--;
        if (count >= totalele)
            break;
        for (int i = maxr; i >= minr; i--)
        {
            cout << arr[i][minc] << " ";
            if (count >= totalele)
                break;

            count++;
        }
        minc++;
    }
    return 0;
}