#include<unordered_map>
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int k;
        std::unordered_map<int,int> freqMap;
        for(int num: nums)
        {
            freqMap[num]++;
        }
        for(const auto& pair: freqMap)
        {
            if(pair.second==1)
            {
                k=pair.first;
                break;
            }
        }
        return k;
    }
};
