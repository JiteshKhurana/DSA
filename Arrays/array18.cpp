// Find common elements in 3 sorted arrays
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
    int temp[100];
    int n1, n2,n3;
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

    cout << "Enter the size of 3rd array : ";
    cin >> n3;
    cout << "Enter the elements of 3rd array :" << endl;
    for (int i = 0; i < n3; i++)
    {
        cin >> arr3[i];
    }

    // Finding Intersection of two arrays
    int i = 0, j = 0,count=0;
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
            temp[count]=arr1[i];
            i++;
            j++;
            count++;
        }
        else
        {
            j++;
        }
    }
    
    
    printarray(temp,count);
    
    // Finding Intersection of two arrays
    i = 0, j = 0,count=0;
    while (i < count && j < n3)
    {

        if (temp[i]==temp[i-1])
        {
            i++;
        }

        else if (arr3[j]==arr3[j-1])
        {
            j++;
        }

        else if (temp[i] < arr3[j])
        {
            i++;
        }
        else if (temp[i] == arr3[j])
        {
            arr3[count]=temp[i];
            i++;
            j++;
            count++;
        }
        else
        {
            j++;
        }
    }

    printarray(arr3,count);
    return 0;
}
