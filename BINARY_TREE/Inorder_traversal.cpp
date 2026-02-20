#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int data){
        this->data = data;
        this->left = nullptr;
        this-> right = nullptr;    
    }
         
};

//Inorder
void inorder(Node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//preorder
void Preorder(Node* root){
    if(root == nullptr){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    
    Preorder(root->right);
}

//PostOrder
void Postorder(Node* root){
    if(root == nullptr){
        return;
    }
    Postorder(root->left);

    Postorder(root->right);
     cout<<root->data<<" ";
}




int main(){

    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(5);
    root->left->left = new Node(25);
    root->right->right = new Node(166);
    root->right->right->right = new Node(10);
    root->left->left->left = new Node(25);
    cout<<"Inorder Traversal : ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder Traversal : ";
    Preorder(root);
    cout<<endl;

    cout<<"PostOrder : ";
    Postorder(root);




    return 0;
}
