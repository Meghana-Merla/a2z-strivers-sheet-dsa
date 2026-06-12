#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    double fractionalKnapsack(int W, vector<int>& wt, vector<int>& val, int n) {
        vector<pair<double,int>>vp;
        for(int i=0;i<n;i++){
            vp.push_back({(double)val[i]/wt[i],i});
        }
        sort(vp.rbegin(),vp.rend());
        double ans=0;
        for(int i=0;i<n;i++){
            int idx=vp[i].second;
            if(wt[idx]<=W){
                ans+=val[idx];
                W-=wt[idx];
            }else{
                ans+=(double)val[idx]/wt[idx]*W;
                break;
            }
        }return ans;
    }
};