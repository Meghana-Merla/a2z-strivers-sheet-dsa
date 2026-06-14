#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    class TreeNode {
    public:
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
    int diameter=0;
    int help(TreeNode* root){
        if(!root) return 0;
        int l=help(root->left),r=help(root->right);
        diameter=max(diameter,l+r);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        help(root);
        return diameter;
    }
};