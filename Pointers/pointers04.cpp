#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;    //hexadecimal address i.e arr is a pointer
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<*arr<<endl;   //1
    cout<<*(arr+0)<<endl;   //1
    cout<<*arr+1<<endl;   //2
    cout<<*arr+2<<endl;   //3
    cout<<*arr+3<<endl;   //4
    cout<<*arr+4<<endl;   //5

    cout<<endl;
    int i = 0;
    cout<<i[arr]<<endl;
    return 0;
}