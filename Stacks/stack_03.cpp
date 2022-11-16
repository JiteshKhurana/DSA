#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements :"<<endl;
    cin>>n;
    stack<int> st;
    
    cout<<"Enter the elements:"<<endl;
    while(n--){
        int data;
        cin>>data;
        st.push(data);
    }
        
    cout<<"Printing elements of stack"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}