#include <iostream>
#include <vector>
#include <stack>
using namespace std;

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

void postorder(Node* root) {

    if (root == NULL)
        return;

    stack<Node*> stk1, stk2;
    Node* curr;

    // Step 1: Push root
    stk1.push(root);

    // Step 2: Reverse preorder logic
    while (!stk1.empty()) {
        curr = stk1.top();
        stk1.pop();
        stk2.push(curr);

        if (curr->left != NULL)
            stk1.push(curr->left);

        if (curr->right != NULL)
            stk1.push(curr->right);
    }

    // Step 3: Print postorder
    while (!stk2.empty()) {
        cout << stk2.top()->data << " ";
        stk2.pop();
    }
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    postorder(root);

    return 0;
}