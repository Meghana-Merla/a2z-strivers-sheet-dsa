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
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        help(root);
        return ans;
    }
    void help(TreeNode* root){
        if(root) ans.push_back(root->val);
        else return;
        help(root->left);
        help(root->right);
    }
};