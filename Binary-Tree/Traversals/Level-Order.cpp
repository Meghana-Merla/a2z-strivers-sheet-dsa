#include<iostream>
#include<vector>
#include<queue>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>ans;
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode* x=q.front();
                q.pop();
                ans.push_back(x->val);
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
            }res.push_back(ans);
        }
        return res;
    }
};