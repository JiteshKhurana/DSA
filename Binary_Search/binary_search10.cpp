//Painter Partition Problem
#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int k,int mid){
    int painterCount=1;
    int timeSum=0;
    for (int i = 0; i < n; i++)
    {
        if (timeSum + arr[i] <= mid)
        {
            timeSum += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k || arr[i] > mid)
            {
                return false;
            }
            timeSum = arr[i];
        }
    }
    return true;
}
int PainterPartition(int arr[],int n,int k){
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[]={5,5,5,5};
    int n = 4;
    int k = 2;
    int ans = PainterPartition(arr,n,k);
    cout<<ans<<endl;
    return 0;
}