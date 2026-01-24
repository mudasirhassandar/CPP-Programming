#include <iostream>
using namespace std;
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
int maindiagonalsum(int n, int m, int arr[100][100])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
int seconddiagonalsum(int n, int m, int arr[100][100])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i + j == n - 1)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int row1, column1;
    cout << "Enter the number of rows of frist matrix(max = 100) = ";
    cin >> row1;
    cout << "Enter the number of columns of frist matrix(max = 100) = ";
    cin >> column1;
    if (row1 != column1)
    {
        cout << "It is not square matrix...";
        return 0;
    }
    int arr[100][100];
    cout << "Enter Matrix\n";
    input(row1, column1, arr);
    cout << "Entered Matrix\n";
    display(row1, column1, arr);
    int mainsum = maindiagonalsum(row1, column1, arr);
    cout << "Main Diagonal Sum = " << mainsum << endl;
    int secondsum = seconddiagonalsum(row1, column1, arr);
    cout << "Second Diagonal Sum = " << secondsum << endl;

    return 0;
}