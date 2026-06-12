#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int j=0;
        vector<int>lastSeen(256,-1);
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(lastSeen[s[i]]>=j) j=lastSeen[s[i]]+1;
            lastSeen[s[i]]=i;
            ans=max(ans,i-j+1);
        }return ans;
    }
};