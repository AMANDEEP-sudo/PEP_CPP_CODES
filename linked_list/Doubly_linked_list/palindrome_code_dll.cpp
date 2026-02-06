write cpp code to check if a given doubly linked list is a palindrome or not using counter approach.
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
class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
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

    bool isPalindrome() {
        if (head == NULL) return true;

        Node* left = head;
        Node* right = head;

        // Move right to the end of the list
        while (right->next != NULL)
            right = right->next;

        // Compare left and right nodes
        while (left != right && left->prev != right) {
            if (left->data != right->data)
                return false;
            left = left->next;
            right = right->prev;
        }
        return true;
    }
};