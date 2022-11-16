#include<iostream>
using namespace std;

int main(){
    //Error
    int *ptr = 0;
    int a = 10;
    //*ptr = a;    //it should be ptr = &a
    cout<<*ptr<<endl;
    return 0;
}   