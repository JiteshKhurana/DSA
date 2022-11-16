// Swap Alternates in an array
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
void swapalternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        // int temp = arr[i];
        // arr[i] = arr[i + 1];
        // arr[i + 1] = temp;
        if (i+1<n)
        {
            swap(arr[i],arr[i + 1]);
        }
        
        
    }
    cout << "Alternate array is :" << endl;
    printarray(arr, n);
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

    // Swap Alternate Function
    swapalternate(arr, n);
    return 0;
}
