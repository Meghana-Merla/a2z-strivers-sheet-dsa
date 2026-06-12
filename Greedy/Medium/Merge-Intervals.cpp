#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>>ans;
        sort(inter.begin(),inter.end());
        ans.push_back(inter[0]);
        for(int i=1;i<inter.size();i++){
            int lastend=ans.back()[1];
            if(lastend>=inter[i][0]) ans.back()[1]=max(lastend, inter[i][1]);
            else ans.push_back(inter[i]);
        }

        return ans;
    }
};