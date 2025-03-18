class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        unordered_map<int,int> map;
        for(int num : nums)
        {
            map[num]++;
        }
        int maxf=0;
        for(const auto& pair : map)
        {
            maxf=max(maxf,pair.second);
        }
        int sum=0;
        for(const auto& pair : map)
        {
            if(pair.second==maxf)
            {
                sum+=maxf;
            }
        }
        return sum;    
    }
};
