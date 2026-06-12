#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newInterval) {
        vector<vector<int>>merged;
        int n=inter.size(),i=0;
        while(i<n&&inter[i][1]<newInterval[0]){
            merged.push_back(inter[i++]);
        }
        while(i<n&&inter[i][0]<=newInterval[1]){
            newInterval={min(newInterval[0],inter[i][0]),max(newInterval[1],inter[i][1])};
            i++;
        }

        merged.push_back(newInterval);
        while(i<n) {
            merged.push_back(inter[i++]);
        }
        return merged;
    }
};