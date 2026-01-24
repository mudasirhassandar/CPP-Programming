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
void multiplication(int n, int m, int arr[100][100], int brr[100][100], int mul[100][100], int limit)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < limit; k++)
            {

                mul[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
}

int main()
{
    int row1, column1, row2, column2;
    cout << "Enter the number of rows of frist matrix(max = 100) = ";
    cin >> row1;
    cout << "Enter the number of columns of frist matrix(max = 100) = ";
    cin >> column1;
    cout << "Enter the number of rows of second matrix(max = 100) = ";
    cin >> row2;
    cout << "Enter the number of columns of second matrix(max = 100) = ";
    cin >> column2;
    if (column1 != row2)
    {
        printf("Multiplication is not possible  ....\n");
        return 0;
    }
    int arr[100][100];
    int brr[100][100];
    int mul[100][100];
    cout << "<<<<Enter the elements of frist matrix>>>>" << endl;
    input(row1, column1, arr);
    cout << "<<<<Enter the elements of second matrix>>>>" << endl;
    input(row2, column2, brr);
    cout << "First Matrix" << endl;
    display(row1, column1, arr);
    cout << "Second Matrix" << endl;
    display(row2, column2, brr);
    multiplication(row1, column2, arr, brr, mul, column1);
    cout << "Multiplication of  Matricies" << endl;
    display(row1, column2, mul);
    return 0;
}