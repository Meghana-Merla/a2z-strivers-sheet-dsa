#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        if(n == 0) return 0;
        unordered_map<int, int> count;
        int left = 0, maxFruits = 0;

        for(int right = 0; right < n; right++) {
            count[fruits[right]]++;
            while(count.size() > 2) {
                count[fruits[left]]--;
                if(count[fruits[left]] == 0) {
                    count.erase(fruits[left]);
                }
                left++;
            }
            maxFruits = max(maxFruits, right - left + 1);
        }

        return maxFruits;
    }
};