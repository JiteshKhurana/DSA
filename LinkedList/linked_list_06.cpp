//Singly linked list as circular
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

void InsertNode(Node *&tail, int element,int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // Assuming that the element is present in the list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found = curr is representing element wala node
        Node *newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}
void Traversal(Node *tail)
{
    if(tail==NULL){
        cout<<"List is empty Nothing to show"<<endl;
        return;
    }
    
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    }
    
    while (tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int element){
    //Empty list
    if(tail==NULL){
        cout<<"List is empty Nothing to delete"<<endl;
        return;
    }
    else{
        //Non-Empty
        //assuming that value is present in the linked list
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != element){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //Single Node
        if(curr==prev){
            tail=NULL;
        }
        //>=2 Nodes
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }

}
bool search(Node *tail, int target)
{
    Node *temp = tail;
    Node *temp1 = tail;
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return 0;
    }
    else
    {
        do
        {
            if(temp->data == target){
                return true;
            }
            temp=temp->next;

        } while (temp != temp1);
        
        return false;
    }
}
int main()
{
    Node *tail = NULL;
    // empty list mein insert
    InsertNode(tail, 5,3);
    Traversal(tail);
    InsertNode(tail, 3,5);
    Traversal(tail);
    InsertNode(tail, 5,7);
    Traversal(tail);
    InsertNode(tail, 7,9);
    Traversal(tail);
    InsertNode(tail, 5,11);
    Traversal(tail);
    InsertNode(tail, 7,10);
    Traversal(tail);
    InsertNode(tail, 3,4);
    Traversal(tail);
    deleteNode(tail,11);
    Traversal(tail);
    deleteNode(tail,5 );
    Traversal(tail);
    if(search(tail,71)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    

    return 0;
}