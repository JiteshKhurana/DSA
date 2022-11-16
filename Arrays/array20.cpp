//Find first repeating element in an array
#include <iostream>
#include <unordered_map> 
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int firstrepeating(int arr[],int n){
    //step 1 -> store count of numbers using map
    unordered_map<int,int> count;
    for (int i = 0; i < n; i++)
    {
        int currentelement= arr[i];
        count[currentelement]++;
    }

    //step 2 -> traverse array and find the ans
    for (int i = 0; i < n; i++)
    {
        int currentelement= arr[i];
        if (count[currentelement]>1)
        {
            return currentelement;
        } 
    }
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the elements of array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if(arr[i]==arr[j]){
    //             cout<<arr[i];
    //             return 0;
    //         }
    //     }
        
    // }

    //2nd approach using hashmap
    int ans = firstrepeating(arr,n);
    cout<<ans;
    return 0;
}
