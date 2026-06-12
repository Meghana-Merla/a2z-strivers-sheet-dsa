#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public: 
    int maxMeetings(vector<int>&start, vector<int>&end, int n) {
        vector<pair<int,int>>meet;
        for(int i=0;i<n;i++){
            meet.push_back({end[i],start[i]});
        }
        sort(meet.begin(),meet.end());
        int ans=1, lastend=meet[0].first;
        for(int i=1;i<n;i++){
            if(meet[i].second>lastend){
                ans++;
                lastend=meet[i].first;
            }
        }return ans;
    }
};