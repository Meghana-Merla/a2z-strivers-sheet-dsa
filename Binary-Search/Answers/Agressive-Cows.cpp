#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool canPlace(int mid,vector<int>&stalls, int cows){
        int cow=1;
        int last=stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-last>=mid){
                cow++;
                last=stalls[i];
                if(cow==cows){
                    return true;
                }
            }
        }
        return false;
    }
    int agressiveCows(vector<int>& stalls, int cows) {
        sort(stalls.begin(), stalls.end());
        int low=1, high=stalls[stalls.size()-1]-stalls[0];
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canPlace(mid,stalls,cows)){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};