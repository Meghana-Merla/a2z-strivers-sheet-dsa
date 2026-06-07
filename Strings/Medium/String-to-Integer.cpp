#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size();
        bool neg=false;
        while(i<n&&s[i]==' ') i++;
        if(i<n&&s[i]=='-') {
            neg=true;
            i++;
        }else if(i<n&&s[i]=='+') i++;
        while(i<n&&s[i]=='0') i++;

        int ans=0;
        while(i<n){
            if(s[i]<'0'||s[i]>'9') break;
            int x=s[i]-'0';
            if(ans>(INT_MAX-x)/10) return neg?INT_MIN:INT_MAX;
            ans=ans*10+x;
            i++;
        }
        
        if(neg) ans=-1*ans;
        return ans;
    }
};