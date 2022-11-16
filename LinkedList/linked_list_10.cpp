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
void InsertAtTail(Node *&tail, int d)
{
    Node *newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;
}
int MiddleOfLinkedList(Node* head){
    if(head==NULL || head->next==NULL){
        return head->data;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast=fast->next;
        if(fast !=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow->data;
    
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
    InsertAtTail(tail,12);
    Traverse(head);
    cout<<MiddleOfLinkedList(head)<<endl;
    return 0;
}