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

void InsertAtHead(Node *&head, int d)
{
    // Step 1:Create new node
    Node *newNode = new Node(d);
    // Step 2:set newNode ptr to head node
    newNode->next = head;
    // Step 3:head update
    head = newNode;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;
}

int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void InsertAtPosition(Node *&head,Node* &tail, int pos, int d)
{
    if (pos == 1)
    {
        InsertAtHead(head, d);
    }
    else  if(getLength(head)==pos-1){
        InsertAtTail(tail,d);
    }

    else
    {
        Node *temp = head;
        int count = 1;
        while (count < pos - 1)
        {
            temp = temp->next;
            count++;
        }
        Node *nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }
}
void Traverse(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *a = new Node(3);
    Node *head = a;
    Node *tail = a;

    InsertAtTail(tail, 5);
    InsertAtTail(tail, 7);
    InsertAtTail(tail, 9);
    InsertAtTail(tail, 11);
    InsertAtPosition(head,tail, 6, 55);
    Traverse(head);
    cout<<head->data<<endl;
    cout<<tail->data;
    return 0;
}