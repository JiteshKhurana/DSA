//fast expo
#include<iostream>
using namespace std;

int exponent(int n){
    //Base Case
    if(n==0)
        return 1;
    int CP = exponent(n/2);
    if(n&1){
        return CP*CP*2;
    }
    else{
        return CP*CP;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int ans = exponent(n);
    cout<<ans<<endl;
    return 0;
}