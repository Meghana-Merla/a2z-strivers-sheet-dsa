#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int mx,curr=0;
        for(int i=0;i<k;i++) curr+=cardPoints[i];
        mx=curr;
        for(int i=k-1;i>=0;i--){
            curr-=cardPoints[i];
            curr+=cardPoints[n-k+i];
            mx=max(mx,curr);
        }return mx;
    }
};