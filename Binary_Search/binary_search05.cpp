// Find peak index in a mountain array
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[mid];
} 

int main()
{
    int arr[] = {3, 4, 5, 1};
    int n = 4;
    int peak = binarySearch(arr, n);
    cout << "Peak element is : " << peak << endl;

    return 0;
}