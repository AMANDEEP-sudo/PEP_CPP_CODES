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
        left = right = nullptr;
    }
};

vector<int> inorderTraversal(Node* root) {
    vector<int> ans;
    stack<Node*> s;
    Node* curr = root;

    while (curr != nullptr || !s.empty()) {

        // Reach leftmost node
        while (curr != nullptr) {
            s.push(curr);
            curr = curr->left;
        }

        // Process node
        curr = s.top();
        s.pop();
        ans.push_back(curr->data);

        // Move right
        curr = curr->right;
    }

    return ans;
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> result = inorderTraversal(root);

    for (int x : result)
        cout << x << " ";

    return 0;
}