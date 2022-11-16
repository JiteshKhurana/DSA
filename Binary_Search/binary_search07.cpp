// Search in a rotated and sorted array
#include <iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e, int target)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // Element found
        if (arr[mid] == target)
        {
            return true;
        }
        // Check in left part and update the value of end and neglect right part
        if (target < arr[mid])
        {
            end = mid - 1;
        }
        // Check in right part and update the value of start and neglect left part
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}
int PivotElement(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int SearchInARotatedAndSortedArray(int arr[], int n, int target)
{
    int pivot = PivotElement(arr, n);
    if (target >= arr[pivot] && target <= arr[n - 1])
    {
        // Binary Search on second line
        return binarySearch(arr, pivot, n - 1, target);
    }
    else
    {
        // Binary Search on first line
        return binarySearch(arr, 0, pivot - 1, target);
    }
}
int main()
{
    int arr[] = {7, 9, 1, 2, 3};
    int n = 5;
    int target = 7;
    if(SearchInARotatedAndSortedArray(arr, n, target)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}