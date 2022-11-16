//Reverse a linked list
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

void ReverseALinkedList(Node* &head,Node* curr,Node* prev){
    //Base Case
    if(curr==NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    ReverseALinkedList(head,forward,curr);
    curr->next=prev;
}

void Traverse(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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

int main(){
    Node* a = new Node(3);
    Node* head = a;
    Node* tail = a;
    Node* curr = head;
    Node* prev = NULL;
    InsertAtHead(head,5);
    InsertAtHead(head,7);
    InsertAtHead(head,9);
    InsertAtHead(head,11);
    Traverse(head);
    ReverseALinkedList(head,curr,prev);
    Traverse(head);
    return 0;
} 