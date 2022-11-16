//Find fixed point (value=index) in a sorted array
#include<iostream>
using namespace std;

int FixedPoint(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==mid){
            return mid;
        }
        if(arr[mid]>mid){
            end = mid -1;
        }
        else{
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return -1;  //if there is no fixed point return -1
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = 5;
    int ans = FixedPoint(arr,n);
    cout<<ans<<endl;
    return 0;
}