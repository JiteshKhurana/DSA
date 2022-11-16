#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "Printing array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    // If first array is larger then copying remaining elements into 3rd array
    while (i < n1)
    {
        arr3[k++] = arr1[i++];
    }

    // If second array is larger then copying remaining elements into 3rd array
    while (j < n2)
    {
        arr3[k] = arr2[j];
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 5, 7};
    int arr2[3] = {3, 4, 6};
    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    printArray(arr3, 8);
    return 0;
}

