//Linear Search in an array
#include<iostream>
using namespace std;
bool search(int arr[],int n,int target){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==target){
            cout<<"Element is found at index : "<<i<<endl;
            return true;
        } 
    }
    return false;
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100];
    int n,target;
    cout<<"Enter the size of array : ";
    cin>>n;

    //Taking input in array
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //Printing array
    cout<<"Printing the elements in array : ";
    printarray(arr,n);
    
    //Asking the user to enter the target
    cout<<"Enter the value of target : ";
    cin>>target;

    if (!(search(arr,n,target)))
    {
        cout<<"Element Not found";
    }
    
    
    return 0;
}