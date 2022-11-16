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

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtPosition(Node *&head, Node *&tail, int pos, int d)
{
    if (pos == 1)
    {
        InsertAtHead(head, d);
    }
    else if (getLength(head) == pos - 1)
    {
        InsertAtTail(tail, d);
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
        Node *newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void deleteNodeAtTarget(Node *&head, Node *&tail, int target)
{
    Node *curr = head;
    Node *prev = NULL;

    while (curr->data != target)
    {
        prev = curr;
        curr = curr->next;
    }
    if (prev == NULL)
    {
        head = head->next;
        curr->next = NULL;
        delete curr;
    }
    else if (curr->next == NULL)
    {
        prev->next = curr->next;
        curr->next = NULL;
        tail = prev;
        delete curr;
    }
    else
    {
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void deleteNodeAtIndex(Node *&head, Node *&tail, int pos)
{
    Node *curr = head;
    Node *prev = NULL;
    int count = 1;
    while (count <= pos - 1)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if (pos == 1)
    {
        head = head->next;
        curr->next = NULL;
        delete curr;
    }
    else if (curr->next == NULL)
    {
        prev->next = curr->next;
        curr->next = NULL;
        tail = prev;
        delete curr;
    }
    else
    {
        prev->next = curr->next;
        curr->next = NULL;
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
int main()
{
    Node *a = new Node(3);
    Node *head = a;
    Node *tail = a;

    InsertAtTail(tail, 5);
    InsertAtTail(tail, 7);
    InsertAtTail(tail, 9);
    InsertAtTail(tail, 11);
    InsertAtPosition(head, tail, 6, 13);
    Traverse(head);
    // deleteNodeAtTarget(head,tail, 11);
    deleteNodeAtIndex(head, tail, 6);
    Traverse(head);
    if(search(head,11)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    cout << "head is : " << head->data << endl;
    cout << "tail is : " << tail->data << endl;
    return 0;
}