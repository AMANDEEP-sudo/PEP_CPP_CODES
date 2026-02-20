// write a code in cpp amd createa a linked list and then extract those data from linkedlist and  print it ino the array.

#include<iostream>
using namespace std;

//node creation
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};
//main function
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // Count the number of nodes in the linked list
    int count = 0;
    Node* temp = head;
    while(temp != nullptr) {
        count++;
        temp = temp->next;
    }

    // Create an array to hold the data from the linked list
    int* arr = new int[count];
    
    // Extract data from the linked list and store it in the array
    temp = head;
    for(int i = 0; i < count; i++) {
        arr[i] = temp->data;
        temp = temp->next;
    }

    // Print the array
    cout << "Array elements: ";
    for(int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    return 0;
}