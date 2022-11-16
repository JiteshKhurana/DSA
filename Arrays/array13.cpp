//Find duplicate in an array of N+1 integers
#include<iostream>
using namespace std;

int main(){
    int n,arr[100];
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<"Enter the elements of array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Your array is :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum1=0;
    for (int i = 0; i < n; i++)
    {
        sum1+=arr[i];
    }
    int N=n-1;
    int sum2 = N*(N+1)/2;
    int ans=sum1-sum2;
    cout<<ans;
    
    
    

    return 0;
}