#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> result;
        unordered_map<int,int> freqMap;
        for(int num:nums)
        {
            freqMap[num]++;
        }
        for(auto& pair:freqMap)
        {
            if(pair.second==1)
            {
                result.push_back(pair.first);
            }
            if(result.size()>=2)
            {
                break;
            }
        }
        return result;
    }
};