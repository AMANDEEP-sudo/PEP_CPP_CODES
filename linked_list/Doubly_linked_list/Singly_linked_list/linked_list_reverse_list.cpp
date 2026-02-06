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

// reverse linked list (recursive)
Node* reverseList(Node* head) {
    // base case
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // recursive call
    Node* rest = reverseList(head->next);

    // fixing links
    head->next->next = head;
    head->next = NULL;

    return rest;
}

// print linked list
void PrintList(Node* node) {
    while (node != NULL) {
        cout << node->data;
        if (node->next != NULL)
            cout << " -> ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original List: ";
    PrintList(head);

    head = reverseList(head);

    cout << "Reversed List: ";
    PrintList(head);

    return 0;
}