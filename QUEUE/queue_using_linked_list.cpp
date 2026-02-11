#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class myqueue{
    int current_size;
    Node* front;
    Node* rear;

    public:

    myqueue(){
        current_size = 0;
        front = rear = NULL;
    }
    bool isEmpty(){
        return current_size == 0;
    }

    //Enqueue
    void Enqueue(int  data)
{
    Node* node = new Node(data);
    if(isEmpty()){
        front = rear = node;
    }
    else{
        rear->next = node;
        rear = node;
    }
    current_size++;
}
// Dequeue
int dequeue(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;

    }
    Node* temp = front;
    int removedData = temp -> data;
    front = front-> next;

    if(front == nullptr){
        rear = nullptr;
        delete temp;

        current_size--;
        return removedData;

    }
};

    //get size of queue
    int size(){
        return current_size;
    }

};
int main(){
    myqueue q;
    q.Enqueue(10);
    q.Enqueue(22);
    cout << q.dequeue() << endl;   
    q.Enqueue(30);
    cout<<"front: "<<q.dequeue()<<endl;
    cout<<"size: "<<q.size()<<endl; 
    
    return 0;

}