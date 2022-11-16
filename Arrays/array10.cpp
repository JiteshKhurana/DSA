// Sort an array of 0s,1s,2s
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

    int countone = 0, counttwo = 0, countzero = 0;
    for (int i = 0; i < n; i++)
    {
        // Count all Numbers
        if (arr[i] == 0)
        {
            countzero++;
        }
        else if (arr[i] == 1)
        {
            countone++;
        }
        else
        {
            counttwo++;
        }
    }

    // Put Zero
    int i = 0;
    while (countzero--)
    {
        arr[i] = 0;
        i++;
    }

    while (countone--)
    {
        arr[i] = 1;
        i++;
    }

    while (counttwo--)
    {
        arr[i] = 2;
        i++;
    }

    cout << "Sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}