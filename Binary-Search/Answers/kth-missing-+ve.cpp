#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int x=nums[mid]-(mid+1);
            if(x>=k){
                high=mid-1;
            }else low=mid+1;
        }return low+k;
    }
};