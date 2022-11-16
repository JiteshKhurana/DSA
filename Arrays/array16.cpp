// Find the triplet that sum to a given value
#include <iostream>
#include <algorithm>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int tripletsum(int arr[], int n, int sum)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int arr[100];
    int n, sum = 0;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the elements of array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum " << endl;
    cin >> sum;

    cout << "array is :" << endl;
    printarray(arr, n);

    // int ans = tripletsum(arr, n, sum);

    // if (ans == 1)
    // {
    //     cout << "Valid pair Exists" << endl;
    // }
    // else
    // {
    //     cout << "Valid pair does not exist" << endl;
    // }
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        int first = arr[i];
        int newsum = sum - first;
        int k = 0, j = n - 1;
        while (k < j)
        {
            if (arr[k] + arr[j] == newsum)
            {
                cout <<first<<" "<< arr[k] << " " << arr[j] << endl;
                k++;
            }
            else if (arr[k] + arr[j] > newsum)
            {
                j--;
            }
            else
            {
                k++;
            }
        }
    }

    return 0;
}
