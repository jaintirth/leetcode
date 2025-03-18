class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        bool k=false;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                k=true;
                break;
            }
        }
        return k;
    }
};
