#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

};
int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> prev = head;
    head -> next -> next = new Node(30);
    head -> next -> next -> prev = head -> next;
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> prev = head -> next -> next;

    Node* temp = head;
    while(temp != nullptr){
        cout<<temp -> data<<" ";

        temp = temp -> next;
    }

    return 0;
}
