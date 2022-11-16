//Binary Search
#include<iostream>
using namespace std;

bool binarySearch(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        //Element found
        if(arr[mid]==target){
            return true;
        }
        //Check in left part and update the value of end and neglect right part
        if(target<arr[mid]){
            end = mid -1;
        }
        //Check in right part and update the value of start and neglect left part
        else{
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return false;
}

int main(){
    int arr[]={2,4,6,8,9,11,23};
    int n = 7;
    int target = 42;
    if(binarySearch(arr,n,target)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}