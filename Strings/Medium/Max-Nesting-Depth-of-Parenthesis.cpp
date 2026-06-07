#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int a=0,ans=0;
        for(char ch:s){
            if(ch=='(') a++;
            ans=max(ans,a);
            if(ch==')') a--;
        }
        return ans;
    }
};