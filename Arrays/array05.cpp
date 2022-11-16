//Find max and min element in an array
#include<iostream>
#include<limits.h>
using namespace std;
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void arraymax(int arr[],int n){
    // int max=arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]>max)
    //     {
    //         max=arr[i];
    //     }
        
    // }

    //2nd Approach
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans,arr[i]);
    }
    
    cout<<"Max element in the array is "<<ans<<endl;;
}

void arraymin(int arr[],int n){
    // int min=arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]<min)
    //     {
    //         min=arr[i];
    //     }
        
    // }

    //2nd Approach
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans,arr[i]);
    }
    cout<<"Min element in the array is "<<ans;
}


 
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements of array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Entered array is :"<<endl;
    printarray(arr,n);

    //Finding maximum element
    arraymax(arr,n);

    //Finding minimum element
    arraymin(arr,n);
    return 0;
}