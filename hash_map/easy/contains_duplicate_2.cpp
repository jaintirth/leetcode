#include<unordered_map>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        bool m = false;
        std::unordered_map<int,int> hashMap;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            auto j=hashMap.find(nums[i]);
            if(j!=hashMap.end())
            {
                int index = j->second;
                if(abs(i-index)<=k)
                {
                    m=true;
                    break;
                }
            }
            hashMap[nums[i]]=i;
        }
        return m;
    }
};
