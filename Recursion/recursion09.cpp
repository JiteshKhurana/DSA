//Search in an array
#include <iostream>
using namespace std;
int SearchInAnArray(int arr[], int n, int target,int i)
{
    // Base Case
    if (arr[i] == target)
    {
        return true;
    }
    if(i+1>n){
        return 0;
    }
    i++;
    SearchInAnArray(arr,n,target,i);
}

int main()
{
    int n, target,i=0;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the value of target:" << endl;
    cin >> target;
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(SearchInAnArray(arr, n, target,i)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;

    }
    return 0;
}