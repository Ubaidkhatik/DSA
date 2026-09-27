#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    // Insert (same as BST insert for simplicity)
    Node* insert(Node* node, int value) {
        if (node == nullptr)
            return new Node(value);

        if (value < node->data)
            node->left = insert(node->left, value);
        else
            node->right = insert(node->right, value);

        return node;
    }

    void insertValue(int value) {
        root = insert(root, value);
    }

    // In-order (L, Root, R)
    void inorder(Node* node) {
        if (node == nullptr) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    // Pre-order (Root, L, R)
    void preorder(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    // Post-order (L, R, Root)
    void postorder(Node* node) {
        if (node == nullptr) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
};

int main() {
    BinaryTree tree;

    // Insert nodes
    tree.insertValue(50);
    tree.insertValue(30);
    tree.insertValue(70);
    tree.insertValue(20);
    tree.insertValue(40);
    tree.insertValue(60);
    tree.insertValue(80);

    cout << "In-order Traversal: ";
    tree.inorder(tree.root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    tree.preorder(tree.root);
    cout << endl;

    cout << "Post-order Traversal: ";
    tree.postorder(tree.root);
    cout << endl;

    return 0;
}
