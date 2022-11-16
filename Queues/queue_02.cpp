#include<iostream>
using namespace std;

class queue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    queue(int n){
        arr = new int[n];
        front = 0;
        rear = 0;
        size = n;
    }

    void push(int element){
        if(rear==size){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        else{
            arr[rear]=element;
            rear++;
        }
    }

    void pop(){
        if(front==rear){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }

    bool isEmpty(){
        if(front==rear)
            return true;
        else
            return false;
    }

    int getSize(){
        return rear-front;
    }

    int getFront(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

int main(){
    queue* q = new queue(5);
    q->push(3);
    q->push(5);
    q->push(7);
    q->push(9);

    cout<<"Front element is "<<q->getFront()<<endl;  //3

    q->pop();

    cout<<"Front element is "<<q->getFront()<<endl; //5

    cout<<"Size of queue is "<<q->getSize()<<endl;  //5

    cout<<"Empty or not "<<q->isEmpty()<<endl;  //0

    cout<<"Printing element of queue"<<endl;

    while(!q->isEmpty()){    //5 7 9
        cout<<q->getFront()<<" ";
        q->pop(); 
    }
    cout<<endl;
    return 0;
}