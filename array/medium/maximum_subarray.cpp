class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int max_current = nums[0];     
        int max_global = nums[0];
        for(int i=1;i<n;i++)
        {
            max_current=max(nums[i],max_current+nums[i]);
            max_global=max(max_current,max_global);
        }
        return max_global;
    }
};
