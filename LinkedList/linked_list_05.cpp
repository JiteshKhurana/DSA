#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void Traverse(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void InsertAtHead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node* newNode = new Node(d);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(d);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
    
}

void InsertAtTail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
        Node* newNode = new Node(d);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(d);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode; 
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int pos, int d)
{
    if (pos == 1)
    {
        InsertAtHead(head,tail, d);
    }
    else if (getLength(head) == pos - 1)
    {
        InsertAtTail(head,tail, d);
    }
    else{
        int count=1;
        Node* temp = head;
        while(count<pos-1){
            temp=temp->next;
            count++;
        }
        Node* newNode = new Node(d);
        newNode->next=temp->next;
        temp->next->prev=newNode;
        temp->next=newNode;
        newNode->prev=temp;
    }
}
void deleteNodeAtIndex(Node* &head,Node* &tail, int pos)
{
    Node *curr = head;
    Node *prev = NULL;
    int count=1;
    while (count<=pos-1)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if (pos == 1)
    {
        curr->next->prev=NULL;
        head=curr->next;
        curr->next=NULL;
        delete curr;
    }
    else if(curr->next==NULL){
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        tail = prev;
        delete curr;
    }
    else{
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    
}
bool search(Node *head, int target)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return 0;
    }
    else
    {
        while (temp != NULL)
        {
            if(temp->data == target){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
}
int main(){
    Node* a = new Node(3);
    Node* head = NULL; 
    Node* tail = NULL; 
    Traverse(head);
    // cout<<getLength(head)<<endl;
    // InsertAtHead(head,5);
    // InsertAtHead(head,7);
    // InsertAtHead(head,9);
    InsertAtTail(head,tail,5);
    Traverse(head);
    InsertAtTail(head,tail,7);
    Traverse(head);
    InsertAtTail(head,tail,9);
    Traverse(head);
    cout<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    InsertAtPosition(head,tail,4,56);
    Traverse(head);
    cout<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    deleteNodeAtIndex(head,tail,4);
    Traverse(head);
    if(search(head,19)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    cout<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    return 0;
}