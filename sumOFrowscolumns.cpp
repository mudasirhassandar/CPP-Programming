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
void columnsum(int n, int m, int arr[100][100])
{

    for (int i = 0; i < n; i++)

    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[j][i];
        }
        cout << "\nSum of " << i + 1 << " column = " << sum << endl;
    }
}
void rowsum(int n, int m, int arr[100][100])
{

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)

        {
            sum += arr[i][j];
        }
        cout << "\nSum of " << i + 1 << " row = " << sum << endl;
    }
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
    rowsum(row1, column1, arr);

    columnsum(row1, column1, arr);
    return 0;
}