class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        int max_current=nums[0];
        int min_current=nums[0];
        int max_global=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
            {
                swap(max_current,min_current);
            }
            max_current=max(max_current*nums[i],nums[i]);
            min_current=min(min_current*nums[i],nums[i]);
            
            max_global=max(max_global,max_current);
        }
        return max_global;
    }
};
