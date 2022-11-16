#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creation
    queue<int> q;

    //push element
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);

    //removing element
    q.pop();

    //front element
    cout<<"Front element is :"<<q.front()<<endl;

    //size of queue
    cout<<"Size of queue is :"<<q.size()<<endl;

    //check empty or not
    cout<<"empty or not :"<<q.empty()<<endl;

    //Printing queue
    cout<<"Printing Queue"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}