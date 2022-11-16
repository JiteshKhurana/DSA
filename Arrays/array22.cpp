// Minimum swaps required to bring elements less than equal to k together
#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int minimum_swaps(int arr[],int n,int k){
    //Finding window size i.e counting no. of integers <=k
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<=k)
        {
            count++;
        }
        
    }
    
    //Creating first window
    int bad=0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i]>k)
        {
            bad++;
        }
    }

    int ans = bad;
    //Check for remaining windows
    for(int i =0 , j=count; j<n ; i++ , j++){
        //check old element
        if (arr[i]>k)
        {
            bad--;
        }

        if (arr[j]>k)
        {
            bad++;
        }
        
    ans = min(ans,bad);
    }
    return ans;
}
int main()
{
    int arr[]={2,7,9,5,8,7,4};
    int k = 5;
    int ans = minimum_swaps(arr,7,5);

    cout<<ans;
    
    return 0;
}
