#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// insert at head
void InsertAtHead(Node* &head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// print linked list
void PrintList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    InsertAtHead(head, 30);
    InsertAtHead(head, 20);
    InsertAtHead(head, 10);

    PrintList(head);

    return 0;
}
