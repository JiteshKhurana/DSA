#include<iostream>
using namespace std;
// void dummy(int arr[],int n){
//     cout<<sizeof(arr);
// }
void dummy(int *arr,int n){
    cout<<sizeof(arr)<<endl;
}

int main(){
    int arr[]= {1,2,3,4,5};
    dummy(arr,5);  //Here pointer is passed
    return 0;
}