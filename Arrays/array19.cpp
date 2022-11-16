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

    int i =0,j=0,k=0;
    while (i<n1 && j<n2 && k<n3)
    {   
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }
        // x < y
        else if (arr1[i] < arr2[j])
            i++;
 
        // y < z
        else if (arr2[j] < arr3[k])
            j++;
 
        // We reach here when x > y and z < y, i.e., z is
        // smallest
        else
            k++;
    
    }
    return 0;
}
