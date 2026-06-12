#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j;
        int n=nums.size();
        int x=0,ans=0;
        for(j=0;j<n;j++){
            if(nums[j]==0){
                x++;
            }
            while(x>k){
                if(nums[i]==0) x--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};