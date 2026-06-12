#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]!=5) return false;
        int f=0, t=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) f++;
            else if(bills[i]==10){
                if(f>0) f--;
                else return false;
                t++;
            }else{
                if(t>0&&f>0) {
                    t--;
                    f--;
                }else if(f>2) f-=3;
                else return false;
            }
        }

        return true;
    }
};