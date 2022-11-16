#include<iostream>
using namespace std;

int main(){
    int ***r,**q,*p,i=8;
    p=&i;
    (*p)++;   //i=9
    q=&p;     
    (**q)++;  //i=10
    r=&q;
    cout<<*p<<endl;  //10
    cout<<**q<<endl; //10
    cout<<***r<<endl; //10
    return 0;
}