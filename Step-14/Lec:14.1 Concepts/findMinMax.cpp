#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Insert into BST
TreeNode* insertNode(TreeNode* root, int val) {
    if (root == nullptr)
        return new TreeNode(val);

    if (val < root->val)
        root->left = insertNode(root->left, val);
    else
        root->right = insertNode(root->right, val);

    return root;
}

// Find Minimum in BST
TreeNode* findMin(TreeNode* root) {
    if (root == nullptr) return nullptr;
    while (root->left != nullptr)
        root = root->left;
    return root;
}

// Find Maximum in BST
TreeNode* findMax(TreeNode* root) {
    if (root == nullptr) return nullptr;
    while (root->right != nullptr)
        root = root->right;
    return root;
}

int main() {
    TreeNode* root = nullptr;

    // Insert elements
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 70);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    TreeNode* minNode = findMin(root);
    TreeNode* maxNode = findMax(root);

    if (minNode)
        cout << "Minimum value in BST: " << minNode->val << endl;

    if (maxNode)
        cout << "Maximum value in BST: " << maxNode->val << endl;

    return 0;
}
