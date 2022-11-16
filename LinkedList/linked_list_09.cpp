//Middle of linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
int getLength(Node* head){
    Node* temp = head;
    int len=0;
    while(temp != NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void InsertAtHead(Node *&head, int d)
{
    Node *newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}
void InsertAtTail(Node *&tail, int d)
{
    Node *newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;
}
int MiddleOfLinkedList(Node* head){
    int ans=(getLength(head)/2)+1;
    Node* temp = head;
    int count=1;
    while(count<ans){
        count++;
        temp=temp->next;
    }

    return temp->data;
}
void Traverse(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(2);
    Node* head = a;
    Node* tail = a;
    InsertAtTail(tail,4);
    InsertAtTail(tail,6);
    InsertAtTail(tail,8);
    InsertAtTail(tail,10);
    Traverse(head);
    cout<<MiddleOfLinkedList(head)<<endl;
    return 0;
}