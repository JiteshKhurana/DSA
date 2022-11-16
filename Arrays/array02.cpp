#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void change(int arr[],int n){
    arr[2] = 6;
    arr[4] = 89;
    printarray(arr,5);
    cout<<endl;
}
int main(){
    int arr[5]={3,8,4,65,7};
    change(arr,5);
    printarray(arr,5);
    
    return 0;
}