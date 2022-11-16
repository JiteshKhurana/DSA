#include<iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,7};
    int *p = (arr+1);  //5 ka address
    cout<<*arr + 9;    //13
    return 0;
}