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

int main() {

    Node* root = nullptr;

    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    insert(root, 7);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}