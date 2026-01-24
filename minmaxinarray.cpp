#include <iostream>
#include <limits>
using namespace std;
void findMinMax(int *arr, int n, int &min, int &max)
{
    max = INT_MIN;
    min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
}
int main()
{
    int n;
    int max = 0;
    int min = 0;
    cout << "Enter the number of elements = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " emlement = ";
        cin >> arr[i];
    }
    cout << "Entered array" << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    findMinMax(arr, n, min, max);
    cout << "\nMaximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}