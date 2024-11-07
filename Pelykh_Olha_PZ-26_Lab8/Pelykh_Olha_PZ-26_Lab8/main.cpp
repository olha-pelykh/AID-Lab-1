#include <iostream>
#include <queue>

class TreeNode {
public:
    char data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char data) : data(data), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    TreeNode* root;

    void insert(TreeNode*& node, char data) {
        if (!node) {
            node = new TreeNode(data);
            return;
        }
        if (data < node->data) {
            insert(node->left, data);
        }
        else {
            insert(node->right, data);
        }
    }

     void descendingOrder(TreeNode* node) {
        if (!node) return;
        std::cout << node->data << " ";
        descendingOrder(node->left);
        descendingOrder(node->right);
    }

    bool contains(TreeNode* node, char data) {
        if (!node) return false;
        if (node->data == data) return true;
        if (data < node->data) {
            return contains(node->left, data);
        }
        else {
            return contains(node->right, data);
        }
    }

    TreeNode* findParent(TreeNode* node, TreeNode* child) {
        if (!node || node == child || !child) return nullptr;
        if ((node->left && node->left == child) || (node->right && node->right == child)) {
            return node;
        }
        if (child->data < node->data) {
            return findParent(node->left, child);
        }
        else {
            return findParent(node->right, child);
        }
    }

    int getLevel(TreeNode* node, char data, int level) {
        if (!node) return -1;
        if (node->data == data) return level;
        int downlevel = getLevel(node->left, data, level + 1);
        if (downlevel != -1) return downlevel;
        return getLevel(node->right, data, level + 1);
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(char data) {
        insert(root, data);
    }

    void descendingOrder() {
        descendingOrder(root);
        std::cout << std::endl;
    }

    bool contains(char data) {
        return contains(root, data);
    }

    void findParentAndChildren(char data) {
        TreeNode* node = root;
        while (node && node->data != data) {
            if (data < node->data) {
                node = node->left;
            }
            else {
                node = node->right;
            }
        }
        if (!node) {
            std::cout << "Node with value " << data << " not found.\n";
            return;
        }

        TreeNode* parent = findParent(root, node);
        if (parent) {
            std::cout << "Parent of " << data << ": " << parent->data << std::endl;
        }
        else {
            std::cout << data << " is the root node.\n";
        }

        if (node->left) {
            std::cout << "Left child of " << data << ": " << node->left->data << std::endl;
        }
        else {
            std::cout << data << " has no left child.\n";
        }

        if (node->right) {
            std::cout << "Right child of " << data << ": " << node->right->data << std::endl;
        }
        else {
            std::cout << data << " has no right child.\n";
        }
    }

    int getLevel(char data) {
        return getLevel(root, data, 1);
    }
};

int main() {
    BinarySearchTree bst;
    std::string input;
    std::cout << "Enter unique characters to build the BST: ";
    std::cin >> input;

    for (char ch : input) {
        bst.insert(ch);
    }

    std::cout << "Descending order traversal of BST: ";
    bst.descendingOrder();

    char searchValue;
    std::cout << "Enter a character to check if it exists in BST: ";
    std::cin >> searchValue;
    if (bst.contains(searchValue)) {
        std::cout << searchValue << " exists in the BST.\n";
    }
    else {
        std::cout << searchValue << " does not exist in the BST.\n";
    }

    char parentChildValue;
    std::cout << "Enter a character to find its parent and children: ";
    std::cin >> parentChildValue;
    bst.findParentAndChildren(parentChildValue);

    char levelValue;
    std::cout << "Enter a character to find its level: ";
    std::cin >> levelValue;
    int level = bst.getLevel(levelValue);
    if (level != -1) {
        std::cout << "Level of " << levelValue << ": " << level << std::endl;
    }
    else {
        std::cout << levelValue << " not found in the BST.\n";
    }

    return 0;
}