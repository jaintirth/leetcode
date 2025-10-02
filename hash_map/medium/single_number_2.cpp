#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freqMap;
        int result;
        for(int i=0;i<nums.size();i++)
        {
            freqMap[nums[i]]++;
        }
        for(auto& pair:freqMap)
        {
            if(pair.second==1){
                result=pair.first;
                break;
            }
        }
        return result;
    }
};