#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        sort(inter.begin(),inter.end(),
        [](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        }
        );
        int ans=1, lastEnd=inter[0][1];
        for(int i=1;i<inter.size();i++){
            if(inter[i][0]>=lastEnd){
                ans++;
                lastEnd=inter[i][1];
            }
        }return inter.size()-ans;
    }

};