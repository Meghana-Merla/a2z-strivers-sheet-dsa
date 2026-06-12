#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int shortestJob(vector<int>&jobs){
        sort(jobs.begin(),jobs.end());
        int total=0,wait=0;
        int n=jobs.size();
        for(int i=0;i<n;i++){
            wait+=total;
            total+=jobs[i];
        }return wait/n;
    }
};