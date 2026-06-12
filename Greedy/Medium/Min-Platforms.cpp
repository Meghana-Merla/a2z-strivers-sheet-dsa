#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findPlatform(vector<int>arr, vector<int>dep) {
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0,j=0;
        int ans=0,curr=0;
        while(i<arr.size()&&j<dep.size()){
            if(arr[i]<dep[j]){
                curr++;
                i++;
            }else{
                curr--;
                j++;
            }
            ans=max(ans,curr);
        }return ans;
    }
};