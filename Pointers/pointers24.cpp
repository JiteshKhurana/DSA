#include<iostream>
using namespace std;

int main(){
    char s[] = "hello";
    char *p = s;
    cout<<s[0]<<endl;  //h
    cout<<p[0]<<endl;  //h
    return 0;
}