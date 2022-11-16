#include<iostream>
using namespace std;

int f(int x,int*y,int**z){
    int p,q;
    **z +=1;  //c=5
    q=**z;    //q=5
    *y+=2;    //c=7
    p=*y;     //p=7
    x+=3;     //x=7
    return x+p+q;  //19
}

int main(){
    int c,*b,**a;
    c=4;
    b=&c;
    a=&b;
    cout<<f(c,b,a); //19
    return 0;
}