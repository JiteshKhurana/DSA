//Middle element in a stack
#include<iostream>
#include<stack>
using namespace std;

void MiddleElement(stack<int>& st,int totalSize){
	if((totalSize/2)+1==st.size()){
		cout<<"Middle element is "<<st.top()<<endl;
		return;
	}

	int topElement = st.top();
	st.pop();

	MiddleElement(st,totalSize);

	st.push(topElement);

}

int main(){
	stack<int> st;
	st.push(4);
	st.push(2);
	st.push(6);
	st.push(8);
	st.push(10);
	
	if(st.empty()){
		cout<<"Stack is empty"<<endl;
	}
	else{
		MiddleElement(st,st.size());
	}
	return 0;
}