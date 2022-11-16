#include<iostream>
using namespace std;

int main(){
    int arr[]= {1,2,3};
    cout<<arr<<endl;  // first element ka address
    cout<<arr+1<<endl;// second element ka address
    cout<<&arr<<endl; //first element ka address
    cout<<&arr+1<<endl;

    return 0;
}