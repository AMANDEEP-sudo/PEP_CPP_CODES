#include<iostream>
using namespace std;
//Basic implementation of singly linked list    
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }

};

//printing the linked list/traversal of linked list

void printList(Node* head) {
   Node* temp = head;
   while(temp != nullptr){
    cout<<temp->data<<" -> ";
    temp = temp->next;
   }
   cout<<"nullptr"<<endl;
}

// insert at head
void insertAtHead(Node* &head, int data){
    Node* nayanode = new Node(data);
    nayanode -> next = head;
    head = nayanode;

}
void insertAtTail(Node* &head, int data){
    

}



void insertAtPosition(Node* &head, int data, int pos){
    if(pos == 0){
        insertAtHead(head, data);
    }

     Node* temp = head;
    Node* new_node = new Node(data);
    int current_pos =0;
    while(current_pos !=pos-1){
        temp = temp->next;
        current_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;

}


//main function
int main(){

    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    printList(head);

    insertAtHead(head, 600);
    printList(head);
    return 0;
}