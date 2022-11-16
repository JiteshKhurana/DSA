#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        arr = new int[size];
        top=-1;
        this->size=size;
    }

    void push(int data){
        if(top == size-1){
            cout<<"Stack Overflow for element:"<<data<<endl;
            return;
        }
        top++;
        arr[top]=data; 
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    int getSize(){
        //returns the no. of elements present in stack
        return this->top+1;
    }

    bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }

    int getTop(){
        if(top!=-1){
            return arr[top];
        }
        else
            cout<<"Stack is empty"<<endl;
            return -1;
    }
};

int main()
{
    //Creating a stack of size 5
    stack* st = new stack(5);

    st->push(3);
    st->push(5);
    st->push(7);
    st->push(9);
    st->push(11);
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    // st->pop();
    cout<<st->getSize()<<endl;
    cout<<st->isEmpty()<<endl;
    cout<<st->getTop()<<endl;

    while(!st->isEmpty()){
        cout<<st->getTop()<<endl;
        st->pop();
    }

    return 0;
}