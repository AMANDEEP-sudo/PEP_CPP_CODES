
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};


    //function to search target key
bool SearchKey(Node* head, int key){
    if(head == nullptr){
        return false;
    }
    if(head->data ==key){
            return true;

           
        }
        return SearchKey(head->next,key);
}

//main function
// Function prototype for SearchKey
bool SearchKey(Node* head, int key);
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    // head = insertionAtFront(head,5);

    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;

    if(SearchKey(head,key)){
        cout<<"Key found in the linked list"<<endl;
    }
    else{
        cout<<"Key not found in the linked list"<<endl;
    }

    return 0;
}