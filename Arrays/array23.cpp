#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
bool unique_occurences(int arr[],int n){
    unordered_map<int,int> map;
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        int current_element = arr[i];
        map[current_element]++;
    }

    for (int i = 0; i < n; i++)
    {
        int current_element = arr[i];
        for (int j = i+map[current_element]; j < n; j++)
        {
           int current_element2 = arr[j];

            if (map[current_element]==map[current_element2])
            {
                return false;
            } 
        }
        
    }
    return true;
}

int main(){
    int arr[] = {1,2,1,1,3};
    
    int ans = unique_occurences(arr,5);
    if (ans==1)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    return 0;
}