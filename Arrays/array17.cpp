//Program to cyclically rotate an array by one
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

void rotate(int arr[],int n){
    int x=arr[n-1],i;
    for (int i = n-1; i > 0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0] = x;
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

    cout << " Given array is :" << endl;
    printarray(arr, n);

    
    rotate(arr,n);

    cout<<"Rotated array is :"<<endl;
    printarray(arr,n);
    return 0;
}
