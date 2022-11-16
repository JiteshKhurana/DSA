#include<iostream>
using namespace std;

int main(){
    char sentence[]= "My Name is Jitesh";
    char *ptr = sentence;
    cout<<*ptr<<endl;   //M
    cout<<ptr<<endl;    //My Name is Jitesh
    cout<<&ptr<<endl;   //Address
    return 0;
}