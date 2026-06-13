#include<iostream>
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
    int minValue(TreeNode* root) {
        if(root==NULL) return -1;
        while(root->left!=NULL){
            root=root->left;
        }
        return root->val;
    }
    int maxValue(TreeNode* root) {
        if(root==NULL) return -1;
        while(root->right!=NULL){
            root=root->right;
        }
        return root->val;
    }
};