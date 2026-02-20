#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void InsertAtHead(Node *&head, int data)
{
    Node *new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

void InsertAtHeadCircular(Node* &head, int data){

    Node* new_node = new Node(data); //new node creation

    // case 1:
    if(head == nullptr){
        new_node-> next = new_node;
        head = new_node;
        return;
    }

    // case 2: 
    Node* temp = head;
    while(temp != head){
        temp = temp->next;
    }
    temp -> next = new_node;
    new_node->next = head;
    head = new_node;
}

void Display(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{

    Node *head = nullptr;
    InsertAtHead(head, 50);
    Display(head);
    InsertAtHead(head, 10);
    Display(head);
    InsertAtHead(head, 46);
    Display(head);
    return 0;
}