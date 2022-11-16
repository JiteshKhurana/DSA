#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* p = &a;
    int** q = &p;

    cout<<a<<endl;   //5
    // cout<<*a<<endl;  //error
    cout<<&a<<endl;  //address of a (Hexadecimal)

    cout<<endl;
    
    cout<<p<<endl;   //address of a (Hexadecimal)
    cout<<*p<<endl;  //5
    cout<<&p<<endl;  //address of p (Hexadecimal)

    cout<<endl;

    cout<<q<<endl;   //address of p (Hexadecimal)
    cout<<*q<<endl;  //address of a (Hexadecimal)
    cout<<**q<<endl;  //5
    cout<<&q<<endl;  //address of q (Hexadecimal)
    return 0;
}