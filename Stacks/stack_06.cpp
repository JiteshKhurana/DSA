//Reverse a stack
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& st,int item){
    //Base Case
    if(st.empty()){
        st.push(item);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertAtBottom(st,item);

    st.push(topElement);
}

void reverseStack(stack<int>& st){
    if(st.empty()){
        return;
    }

    int topElement = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st,topElement);
}

int main(){
	stack<int> st;
    
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);

    //10 8 6 4 2
    //2 4 6 8 10 

    reverseStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
        
    
    
	return 0;
}