//Find first non-repeating element in an array
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

// int firstNonRepeating(int arr[], int n)
// {
//     for (int i = 0; i < n; i++) {
//         int j;
//         for (int j = 0; j < n; j++)
        
//             if (i != j && arr[i] == arr[j])
//                 break;
//         if (j == n)
//             return arr[i];
//     }
//     return -1;
// }
int firstNonRepeating(int arr[],int n){
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
        if (count[currentelement]==1)
        {
            return currentelement;
        } 
    }
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of 1st array : ";
    cin >> n;
    cout << "Enter the elements of 1st array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
int ans = firstNonRepeating(arr, n);
    cout << ans;
        
    
    return 0;
}
