#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int j=1;j<strs.size();j++){
            while(strs[j].find(prefix)!=0){
                prefix.pop_back();
                if(prefix.empty()) return "";
            }
        }

        return prefix;
    }
};