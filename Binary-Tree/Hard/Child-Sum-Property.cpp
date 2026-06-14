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
    bool ChildSum(TreeNode* root){
        if(!root) return 1;
        if(!root->left&&!root->right) return 1;
        int sum=0;
        if(root->left) sum+=root->left->val;
        if(root->right) sum+=root->right->val;
        if(root->val!=sum) return 0;
        return ChildSum(root->left)&&ChildSum(root->right);
    }
};