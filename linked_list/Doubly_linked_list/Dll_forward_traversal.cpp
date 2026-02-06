#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedListForward {
public:
    Node* head;

    DoublyLinkedListForward() {
        head = NULL;
    }

    void insertAtTail(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    void forwardTraversal() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};