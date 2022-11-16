//STL-Binary Search
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={2,4,6,8,9,11,23};
    int n = 7;
    int target = 2;
    if(binary_search(arr,arr+n,target)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}