// Find the pair that sum to a given value
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

int pairsum(int arr[], int n, int sum)
{
    // Brute force method T.C= O(n2)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << " " << arr[j] << endl;
                return true;
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

    // int ans = pairsum(arr, n, sum);

    // if (ans == 1)
    // {
    //     cout << "Valid pair Exists" << endl;
    // }
    // else
    // {
    //     cout << "Valid pair does not exist" << endl;
    // }

    // Optimised method
    sort(arr, arr + n);

    int i = 0, j = n - 1;
    while(i<j)
    {
        if (arr[i] + arr[j] == sum)
        {
            cout << arr[i] << " " << arr[j] << endl;
            i++;
        }
        else if (arr[i] + arr[j] > sum)
        {
            j--;
        }
        else{
            i++;
        }
    }

    
    
    return 0;
}
