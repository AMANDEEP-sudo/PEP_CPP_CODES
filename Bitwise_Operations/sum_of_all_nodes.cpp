#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int sumOfNodes(Node* root){
    if(root == nullptr){
        return 0;
    }
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    return root->data + leftSum + rightSum;
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

    int totalSum = sumOfNodes(root);
    cout << "Sum of all nodes in the binary tree: " << totalSum << endl;

    return 0;
}