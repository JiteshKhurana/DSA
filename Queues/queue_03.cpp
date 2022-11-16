#include <iostream>
using namespace std;

class CircularQueue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    CircularQueue(int s)
    {
        arr = new int[s];
        front = -1;
        rear = -1;
        size = s;
    }

    void enqueue(int value)
    {
        // Overflow
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % size))
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        else if (front == -1)
        {
            // first element insertion
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            // handle circular insertion case
            rear = 0;
        }
        else
        {
            // normal insertion case
            rear++;
        }
        arr[rear] = value;
    }

    void dequeue(){
        //underflow
        if(front==-1){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else if(front==rear){
            //single element
            front = rear = -1 ;
        }
        else if(front==size-1){
            //circular nature
            front=0;
        }
        else{
            //normal deletion
            front++;
        }
    }

    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else{
            return false; 
        }
    }

    int getFront(){
        if(front==-1){
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

int main()
{
    CircularQueue* q = new CircularQueue(5);

    q->enqueue(3);
    q->enqueue(5);
    q->enqueue(7);
    q->enqueue(9);
    q->enqueue(11);

    q->dequeue();
    q->enqueue(13);
    cout<<"Front element is "<<q->getFront()<<endl;//3
    q->dequeue();

    cout<<"Front element is "<<q->getFront()<<endl;//5
    
    q->enqueue(15);

    while(!q->isEmpty()){
        cout<<q->getFront()<<" ";
        q->dequeue();
    }
    cout<<endl;
    return 0;
}