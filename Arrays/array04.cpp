// Reverse an array
#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void reversearray(int arr[], int n)
{
    // for (int i = 0; i < n/2; i++)
    // {
    //     // int temp = arr[i];
    //     // arr[i] = arr[n - i - 1];
    //     // arr[n - i - 1] = temp;
    //     swap(arr[i],arr[n - i - 1]);
    // }

    //2nd Approach
    int i =0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout << "Reversed array is : " << endl;
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Printing the array
    cout << "Entered array is :" << endl;
    printarray(arr, n);

    // Reversing the array
    reversearray(arr, n);

    //Printing the reversed array
    printarray(arr, n);
    return 0;
}