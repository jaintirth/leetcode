#include<unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        std::unordered_map<int,int>freqMap;
        for(int num : nums)
        {
            freqMap[num]++;
        }
        int maxNum = 0;
        int maxFreq = 0;
        for(const auto& pair : freqMap)
        {
            if(pair.second>maxFreq)
            {
                maxFreq=pair.second;
                maxNum=pair.first;
            }
        }
        return maxNum;
    }
};
