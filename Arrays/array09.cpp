// Palindrome
#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool palindrome(int arr[], int n)
{
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == arr[n - i - 1])
    //     {
    //         count++;
    //     }
    // }
    // if (count == n)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    // 2nd Approach
    int i = 0;  //Starting index
    int j = n - 1;  //Ending Index
    //Compare left half with right half
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            //if match then check the remaining array
            i++;
            j--;
        }
        else
        {
            //if no match then return false
            return false;
        }
    }
    //entire array is transversed so it is a palindrome
    return true;
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the elements of array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Entered array is :" << endl;
    printarray(arr, n);

    // Checking Palindrome
    int ans = palindrome(arr, n);

    if (ans == 1)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}
