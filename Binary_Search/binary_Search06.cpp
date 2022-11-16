//Find Pivot element in an array
#include<iostream>
using namespace std;

int PivotElement(int arr[], int n)
{
    int start=0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end=mid;
        }
        mid = start+(end-start)/2;
    }
    return arr[start]; 
}  
int main(){
    int arr[] = {7,9,1,2,3};
    int n = 5;
    int pivot = PivotElement(arr, n);
    cout << "Pivot Element is : " << pivot << endl;
    return 0;
}