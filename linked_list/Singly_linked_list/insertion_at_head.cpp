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


void InsertAtEnd(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}
void InsertAtPosition(Node* &head, int data, int pos){
    if(pos <= 0) {
        InsertAtHead(head, data);
        return;
    }
    Node* curr = head;
    for(int i = 0; i < pos - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }
    if(curr == nullptr) {
        InsertAtEnd(head, data);
        return;
    }
    Node* newNode = new Node(data);
    newNode->next = curr->next;
    curr->next = newNode;
}

void deleteHead(Node* &head){
    if(head == nullptr){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}
// void RemoveLastNode(Node* &head){
//     if(head == nullptr){
//         return;
//     }

// }

void deleteNode(Node* &head, int key){
    if(head == nullptr) return;
    Node* temp = head;
    Node* prev = nullptr;
    // If head node itself holds the key
    if(temp->data == key){
        head = temp->next;
        delete temp;
        return;
    }
    // Search for the key
    while(temp != nullptr && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    // If key was not present
    if(temp == nullptr) return;
    prev->next = temp->next;
    delete temp;
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
    InsertAtEnd(head, 40);
    InsertAtEnd(head, 55);
    

    PrintList(head);

    return 0;
}
