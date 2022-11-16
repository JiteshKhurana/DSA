#include<iostream>
using namespace std;

int main(){
    float f = 10.5;
    float p = 2.5;
    float *ptr = &f;
    (*ptr)++;  //11.5
    *ptr = p;  //2.5

    cout<<*ptr<<endl;  //2.5
    cout<<f<<endl;    //2.5
    cout<<p<<endl;    //2.5
    return 0;
}