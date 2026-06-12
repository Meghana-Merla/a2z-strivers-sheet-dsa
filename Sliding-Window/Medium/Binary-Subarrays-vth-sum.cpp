#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i=0,j=0,n=nums.size();
        int ans=0, sum=0, zeroes=0;
        for(j=0;j<n;j++){
            sum+=nums[j];
            while(sum>goal&&i<j){
                sum-=nums[i];
                if(nums[i]!=0) zeroes=0;
                i++;
            }
            while(nums[i]==0&&i<j) {
                zeroes++;
                i++;
            }if(sum==goal) ans+=zeroes+1;
        }return ans;
    }
};