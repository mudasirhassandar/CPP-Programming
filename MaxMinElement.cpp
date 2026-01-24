#include <iostream>
#include <limits.h>
using namespace std;
int rowindex = 0;
int columnindex = 0;
void input(int n, int m, int matrix[100][100])

{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

        {
            cout << "Enter element at (" << i << "," << j << ") = ";
            cin >> matrix[i][j];
        }
    }
}
void display(int n, int m, int matrix[100][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int largest(int n, int m, int arr[100][100])
{
    int largestelement = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > largestelement)
            {
                largestelement = arr[i][j];
                rowindex = i;
                columnindex = j;
            }
        }
    }
    return largestelement;
}
int smallest(int n, int m, int arr[100][100])
{
    int smallestelement = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < smallestelement)
            {
                smallestelement = arr[i][j];
                rowindex = i;
                columnindex = j;
            }
        }
    }
    return smallestelement;
}

int main()
{
    int row1, column1;
    cout << "Enter the number of rows of frist matrix(max = 100) = ";
    cin >> row1;
    cout << "Enter the number of columns of frist matrix(max = 100) = ";
    cin >> column1;

    int arr[100][100];
    cout << "Enter Matrix\n";
    input(row1, column1, arr);
    cout << "Entered Matrix\n";
    display(row1, column1, arr);
    int largestelement = largest(row1, column1, arr);
    cout << "Largestelement = " << largestelement << " at position (" << rowindex << "," << columnindex << ")" << endl;
    int smallestelement = smallest(row1, column1, arr);
    cout << "Smallelement = " << smallestelement << " at position (" << rowindex << "," << columnindex << ")" << endl;
    return 0;
}