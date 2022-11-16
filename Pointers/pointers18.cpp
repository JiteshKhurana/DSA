#include<iostream>
using namespace std;

int main(){
    int a =7 ;
    int *c = &a;
    c = c+1;
    cout<<a<<endl;  //7 
    cout<<*c<<endl;  //Garbage
    return 0;
}