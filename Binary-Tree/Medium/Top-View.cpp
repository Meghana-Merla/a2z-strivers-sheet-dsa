#include<iostream>
#include<vector>
#include<queue>
#include<map>
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
    vector<int> topView(TreeNode* root) {
        if(!root) return {};
        vector<int>ans;
        map<int,int>mp;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int hd=it.second;
            if(mp.find(hd)==mp.end()) mp[hd]=node->val;
            if(node->left) q.push({node->left,hd-1});
            if(node->right) q.push({node->right,hd+1});
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};