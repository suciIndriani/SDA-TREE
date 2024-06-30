#include <iostream>
using namespace std;

// Definisi Node dalam Pohon
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Fungsi untuk traversal Preorder
void preorder(TreeNode* root) {
    if (root) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Fungsi untuk traversal Inorder
void inorder(TreeNode* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Fungsi untuk traversal Postorder
void postorder(TreeNode* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    // Membuat pohon contoh
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Traversal Preorder
    cout << "Traversal Preorder: ";
    preorder(root);
    cout << endl;

    // Traversal Inorder
    cout << "Traversal Inorder: ";
    inorder(root);
    cout << endl;

    // Traversal Postorder
    cout << "Traversal Postorder: ";
    postorder(root);
    cout << endl;

    return 0;
}
