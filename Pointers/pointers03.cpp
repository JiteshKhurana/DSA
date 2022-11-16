#include<iostream>
using namespace std;

void func(int *p){
    *p = *p+1;
}

int main(){
    int a = 5;
    int *p = &a;
    cout<<"Before "<<p<<endl;
    cout<<"Before "<<*p<<endl;
    func(p);
    cout<<"After "<<p<<endl;
    cout<<"After "<<*p<<endl;
    return 0;
}