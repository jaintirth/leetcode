class Solution {
public:
    int longestConsecutive(vector<int>& nums) \
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int maxlen=1;
        int len=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                len++;
            }
            else
            {
                len=1;
            }
            maxlen=max(len,maxlen);
        }
        if(n==0)
        {
            maxlen=0;
        }
        return maxlen;    
    }
};
