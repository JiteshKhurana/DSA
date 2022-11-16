//Reverse a String
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> st;
    string str = "jitesh";
    string ans = "";

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        st.push(ch);
    }

    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout<<ans<<endl;
    return 0;
}