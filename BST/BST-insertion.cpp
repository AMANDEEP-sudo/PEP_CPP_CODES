#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
//Insert function for BST;
Node* insert(Node* root, int key) {

    Node* temp = new Node(key);

    if (root == nullptr) {
        return temp;
    }

    Node* curr = root;

    while (curr != nullptr) {

        if (curr->data > key && curr->left != nullptr) {
            curr = curr->left;
        }
        else if (curr->data < key && curr->right != nullptr) {
            curr = curr->right;
        }
        else {
            break;
        }
    }

    if (curr->data > key) {
        curr->left = temp;
    }
    else {
        curr->right = temp;
    }

    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


//min value function for BST;
void minvalue(Node* root) {
    Node* curr = root;

    while (curr->left != nullptr) {
        curr = curr->left;
    }

    cout << "Minimum value in the BST: " << curr->data << endl;
}



void maxValue(Node* root){
    Node* curr = root;
    while(current-> right != nullptr){
        curr = curr-> right;
    }
    cout<<"max value is : "<<curr-> data<<endl;
}

//second max value function
void secondMaxValue(Node* root){
    Node* curr = root;
    Node* prev = nullptr;

    while(curr-> right != nullptr){
        prev = curr;
        curr = curr-> right;
    }
    if(curr-> left != nullptr){
        maxValue(curr-> left);
    }
    else{
        cout<<"second max value is : "<<prev-> data<<endl;
    }
}

int main() {

    Node* root = nullptr;

    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    insert(root, 7);

    cout << "Inorder Traversal: ";
    inorder(root);

    minvalue(root);
    maxValue(root);
    secondMaxValue(root);

    return 0;
}