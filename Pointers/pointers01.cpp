#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *p = &a; 
    cout<<sizeof(p)<<endl;  //4

    cout<<a<<endl;   //5
    cout<<&a<<endl;  //hexadecimal address of a
    // cout<<*a<<endl;    //error
    cout<<p<<endl;   //hexadecimal address of a 
    cout<<&p<<endl;  //hexadecimal address of p 
    cout<<*p<<endl;  //5

    
    return 0;
}