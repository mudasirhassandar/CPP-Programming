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
void addition(int n, int m, int arr[100][100], int brr[100][100], int add[100][100])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            add[i][j] = arr[i][j] + brr[i][j];
        }
    }
}

int main()
{
    int row, column;
    cout << "Enter the number of rows (max = 100) = ";
    cin >> row;
    cout << "Enter the number of columns (max = 100) = ";
    cin >> column;
    int arr[100][100];
    int brr[100][100];
    int add[100][100];
    cout << "<<<<Enter the elements of frist matrix>>>>" << endl;
    input(row, column, arr);
    cout << "<<<<Enter the elements of second matrix>>>>" << endl;
    input(row, column, brr);
    cout << "First Matrix" << endl;
    display(row, column, arr);
    cout << "Second Matrix" << endl;
    display(row, column, brr);
    addition(row, column, arr, brr, add);
    cout << "Addition of  Matricies" << endl;
    display(row, column, add);
    return 0;
}