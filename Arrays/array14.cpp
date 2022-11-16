//Kadane's Algo / Largest sum contigous subarray
#include<iostream>
#include<limits.h>
using namespace std;
int getMaxSubarraySum(int arr[],int n){
    int ans = INT_MIN;
    int sum = 0;
    int start=0,maxi=INT_MIN;
    int end;

    for (int i = 0; i < n; i++)
    {
        //include current element
        sum += arr[i];

        //Update the ans
        ans= max(ans,sum);
        
        if (sum<0)
        {
            sum=0;
        }

        for (int i = 0; i<n; i++)
        {
            if (arr[i]>0)
            {
            start = i;
            break;
            }

        }
        
        end=max(sum,maxi);

        for (int i = start ; i <= end; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
    }
    return ans;
    
}
int main(){
    int n,arr[100];
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<"Enter the elements of array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // cout<<"Your array is :";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // int sum1=0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum1+=arr[i];
    // }
    // int N=n-1;
    // int sum2 = N*(N+1)/2;
    
    int ans = getMaxSubarraySum(arr,n);
    cout<<ans;
    

    return 0;
} 
    
    
