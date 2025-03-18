#include<unordered_map>
class Solution
{
public:
    vector<int>twoSum(vector<int>& nums,int target)
    {
        unordered_map<int,int> hashMap;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            hashMap[nums[i]]=i;
        }
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int comp=target-nums[i];
            auto j=hashMap.find(comp);
            if(j!=hashMap.end() && (j->second)!=i)
            {
                v.push_back(i);
                v.push_back(j->second);
                break;
            }
        }
        return v;
    }
};
