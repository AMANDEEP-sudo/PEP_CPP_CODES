#include<iostream>
using namespace std;

void levelOrderRec(Node* root, int level, vector<vector<int>>& result) {
    if (root == NULL)
        return;
    if(result.size() <= level)
        result.push_back(vector<int>());

    result[level].push_back(root->data);

    levelOrderRec(root->left, level + 1, result);
    levelOrderRec(root->right, level + 1, result);
}

vector<vector<int>> levelOrder(Node* root) {

    vector<vector<int>> result;
    
    levelOrderRec(root, 0, result);
    return result;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<vector<int>> result = levelOrder(root);

    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}