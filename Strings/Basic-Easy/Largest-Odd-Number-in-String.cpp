#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        string ans;
        for(int i=n-1;i>=0;i--){
            int j=num[i]-'0';
            if(j%2!=0){
                ans=string(num.begin(),num.begin()+i+1);
                break;
            }
        }
        return ans;
    }
};