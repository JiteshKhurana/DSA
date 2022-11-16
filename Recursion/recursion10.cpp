// Max in an array
#include <iostream>
#include <limits.h>
using namespace std;
int MaxInAnArray(int arr[], int n, int i, int max)
{
    // Base Case
    if (i + 1 >= n)
    {
        return 0;
    }
    if (arr[i] > max)
    {
        max = arr[i];
    }
    i++;
    MaxInAnArray(arr, n, i, max);
}

int main()
{
    int n, i = 0, max = INT_MIN;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = MaxInAnArray(arr, n, i, max);
    cout << "Max element is : " << max << endl;

    return 0;
}