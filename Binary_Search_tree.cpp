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

class BST {
public:
    Node* root;

    BST() { root = nullptr; }

    // Insert function
    Node* insert(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }

        if (value < node->data)
            node->left = insert(node->left, value);
        else
            node->right = insert(node->right, value);

        return node;
    }

    void insertValue(int value) {
        root = insert(root, value);
    }

    // Inorder traversal
    void inorder(Node* node) {
        if (node == nullptr) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
};

int main() {
    BST tree;
    tree.insertValue(50);
    tree.insertValue(30);
    tree.insertValue(70);
    tree.insertValue(20);
    tree.insertValue(40);
    tree.insertValue(60);
    tree.insertValue(80);

    cout << "Inorder Traversal: ";
    tree.inorder(tree.root);

    return 0;
}
