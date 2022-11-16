// Find union and intersection of two sorted arrays
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
    int arr1[100];
    int arr2[100];
    int arr3[100];
    int n1, n2;
    cout << "Enter the size of 1st array : ";
    cin >> n1;
    cout << "Enter the elements of 1st array :" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the size of 2nd array : ";
    cin >> n2;
    cout << "Enter the elements of 2nd array :" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "1st array is :" << endl;
    printarray(arr1, n1);

    cout << "2nd array is :" << endl;
    printarray(arr2, n2);


    // Finding Intersection of two arrays
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {

        if (arr1[i]==arr1[i-1])
        {
            i++;
        }

        else if (arr2[j]==arr2[j-1])
        {
            j++;
        }

        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    

    return 0;
}
