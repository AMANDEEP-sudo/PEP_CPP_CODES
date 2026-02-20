#include <iostream>
using namespace std;

// Node definition for singly circular linked list
class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Insert at head for linear linked list (for comparison)
void InsertAtHead(Node *&head, int data) {
    Node *new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

// Insert at head for singly circular linked list
void InsertAtHeadCircular(Node* &head, int data) {
    Node* new_node = new Node(data);
    if (head == nullptr) {
        new_node->next = new_node;
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
    head = new_node;
}

// Display function for linear linked list
void Display(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Display function for singly circular linked list
void DisplayCircular(Node *head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Node *temp = head;
    do {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)" << endl;
}

int main() {
    Node *head = nullptr;
    cout << "Linear Linked List Insertion and Display:" << endl;
    InsertAtHead(head, 50);
    Display(head);
    InsertAtHead(head, 10);
    Display(head);
    InsertAtHead(head, 46);
    Display(head);

    // Now demonstrate circular linked list
    Node *circularHead = nullptr;
    cout << "\nSingly Circular Linked List Insertion and Display:" << endl;
    InsertAtHeadCircular(circularHead, 50);
    DisplayCircular(circularHead);
    InsertAtHeadCircular(circularHead, 10);
    DisplayCircular(circularHead);
    InsertAtHeadCircular(circularHead, 46);
    DisplayCircular(circularHead);
    return 0;
}