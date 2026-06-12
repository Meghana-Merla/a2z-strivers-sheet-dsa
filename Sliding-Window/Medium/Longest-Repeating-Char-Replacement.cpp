#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,right=0,mx=0,ans=0;
        vector<int>freq(26,0);
        for(right=0;right<s.size();right++){
            freq[s[right]-'A']++;
            mx=max(mx,freq[s[right]-'A']);
            while((right-left+1-mx)>k){
                freq[s[left]-'A']--;
                left++;
            }ans=max(ans,right-left+1);
        }return ans;
    }
};