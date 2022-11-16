#include<iostream>
using namespace std;

int main(){
    //Dangling Pointer
    int *ptr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    return 0;
}