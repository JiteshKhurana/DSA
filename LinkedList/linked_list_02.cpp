#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void InsertAtHead(Node* &head, int d)
{
    // Step 1:Create new node
    Node *newNode = new Node(d);
    // Step 2:set newNode ptr to head node
    newNode->next = head;
    // Step 3:head update
    head = newNode;
}

void Traverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *a = new Node(3);
    Node *head = a;
    InsertAtHead(head,5);
    InsertAtHead(head,7);
    InsertAtHead(head,9);
    InsertAtHead(head,11);
    Traverse(head); 
    return 0; 
}