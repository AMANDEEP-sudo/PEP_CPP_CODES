#include <iostream>
using namespace std;

// ---------- Tree Node ----------
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// ---------- Height of Tree ----------
int height(Node* root) {
    if (root == NULL)
        return 0;

    return 1 + max(height(root->left), height(root->right));
}

// ---------- Print Given Level ----------
void printLevel(Node* root, int level) {
    if (root == NULL)
        return;

    if (level == 1) {
        cout << root->data << " ";
    }
    else {
        printLevel(root->left, level - 1);
        printLevel(root->right, level - 1);
    }
}

// ---------- Level Order Traversal ----------
void levelOrder(Node* root) {
    int h = height(root);

    for (int i = 1; i <= h; i++) {
        printLevel(root, i);
        cout << endl;
    }
}

// ---------- Example ----------
int main() {
    /*
            1
           / \
          2   3
         / \   \
        4   5   6
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Level Order Traversal:\n";
    levelOrder(root);

    return 0;
}