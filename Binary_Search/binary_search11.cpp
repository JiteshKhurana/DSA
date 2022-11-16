//Aggressive Cows
#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[],int n,int k,int mid){
    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos=arr[i];
        }
    }
    return false;
}
int AggressiveCows(int arr[],int n,int k){
    sort(arr,arr + n);
    int s = 0;
    int e = arr[n-1];
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1; 
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[]={4,2,1,3,6};
    int n = 5;
    int k = 2;
    int ans = AggressiveCows(arr,n,k);
    cout<<ans<<endl;
    return 0;
}