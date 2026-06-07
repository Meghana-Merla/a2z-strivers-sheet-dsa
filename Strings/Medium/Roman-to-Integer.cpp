#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ans=0,n=s.size();
        int i=0;
        while(i<n){
            char ch=s[i];
            if(ch=='M'){
                ans+=1000;
                i++;
            }else if(ch=='D'){
                ans+=500;
                i++;
            }else if(ch=='L'){
                ans+=50;
                i++;
            }
            else if(ch=='I'){
                if(i<n-1){
                    if(s[i+1]=='V'){
                        ans+=4;
                        i+=2;
                    }else if(s[i+1]=='X'){
                        ans+=9;
                        i+=2;
                    }else{
                        ans++;
                        i++;
                    }
                }else{
                    ans++;
                    i++;
                }
            }else if(ch=='C'){
                if(i<n-1){
                    if(s[i+1]=='D'){
                        ans+=400;
                        i+=2;
                    }else if(s[i+1]=='M'){
                        ans+=900;
                        i+=2;
                    }else{
                        ans+=100;
                        i++;
                    }
                }else{
                    ans+=100;
                    i++;
                }
            }else if(ch=='X'){
                if(i<n-1){
                    if(s[i+1]=='L'){
                        ans+=40;
                        i+=2;
                    }else if(s[i+1]=='C'){
                        ans+=90;
                        i+=2;
                    }else{
                        ans+=10;
                        i++;
                    }
                }else{
                    ans+=10;
                    i++;
                }
            }else{
                ans+=5;
                i++;
            }
        }return ans;
    }
};