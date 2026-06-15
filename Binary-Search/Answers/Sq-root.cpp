#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int sqRoot(int n){
        int low=0,high=n,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if((long long)mid*mid<=n){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};