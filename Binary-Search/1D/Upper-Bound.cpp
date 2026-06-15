#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int upperBound(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1,ans=-1;
        while(low<=high){
            int mid=low+(high)-low/2;
            if(target<nums[mid]){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};