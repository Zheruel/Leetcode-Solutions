// 938. Range Sum of BST.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

int rangeSum = 0;

void inOrder(TreeNode* node, int low, int high) {
    if (node) {
        if (node->val >= low && node->val <= high) rangeSum += node->val;

        if (node->val > low) inOrder(node->left, low, high);
        if (node->val < high) inOrder(node->right, low, high);
    }
}


int rangeSumBST(TreeNode* root, int low, int high) {
    inOrder(root, low, high);

    return rangeSum;
}

int main()
{
    std::cout << "Hello World!\n";
}