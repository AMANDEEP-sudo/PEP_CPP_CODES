#include<iostream>
using namespace std;
class Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }


    };

Node* findNode(Node* root, int target){
    if(root == nullptr){
        return nullptr;
    }
    if(root->data == target){
        return root;
    }
    Node* leftResult = findNode(root->left, target);
    if(leftResult != nullptr){
        return leftResult;
    }
    return findNode(root->right, target);
}

int main(){
    // Create a binary tree
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int target = 4;
    Node* result = findNode(root, target);
    if(result != nullptr){
        cout<<"Node with value "<<target<<" found."<<endl;
    }
    else{
        cout<<"Node with value "<<target<<" not found."<<endl;
    }

    return 0;
}
