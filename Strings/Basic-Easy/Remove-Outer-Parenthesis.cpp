#include<bits/stdc++.h>

class Solution {
public:
    string removeOuterParentheses(string s) {
        int a=0;
        string ans;
        for(char ch:s){
            if(ch=='('){
                if(a>0) ans+=ch;
                a++;
            }else{
                a--;
                if(a>0) ans+=ch;
            }
        }return ans;
    }
};