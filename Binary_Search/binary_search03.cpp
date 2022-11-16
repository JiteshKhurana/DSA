//First Occurence,Last Occurence,Total Occurence
#include<iostream>
using namespace std;

int FirstOccurence(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    int ans=-1;  //-1 -> if element is not found
    while(start<=end){
        //Element found
        if(arr[mid]==target){
            ans = mid;
            end = mid-1;
        }
        else if(target<arr[mid]){
            end = mid -1;
        }
        else{
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int LastOccurence(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    int ans=-1;  //-1 -> if element is not found
    while(start<=end){
        //Element found
        if(arr[mid]==target){
            ans = mid;
            start=mid+1;
        }
        else if(target<arr[mid]){
            end = mid -1;
        }
        else{
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int TotalOccurence(int FirstOccurenceAns,int LastOccurenceAns){
    int ans = 0;
    ans = LastOccurenceAns-FirstOccurenceAns+1;
    return ans;
}

int main(){
    int arr[]={1,2,2,2,6,9};
    int n = 6;
    int target = 2;
    int firstOccurenceAns = FirstOccurence(arr,n,target);
    int LastOccurenceAns = LastOccurence(arr,n,target);
    int TotalOccurenceAns = TotalOccurence(firstOccurenceAns,LastOccurenceAns);
    cout<<firstOccurenceAns<<endl;  
    cout<<LastOccurenceAns<<endl;  
    cout<<TotalOccurenceAns<<endl;  
      
    return 0;
}