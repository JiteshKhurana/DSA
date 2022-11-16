#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size;
    size=sizeof(arr)/sizeof(int);  //Wrong formula
    cout<<size<<endl;
    printarray(arr,5);
    
    return 0;
}