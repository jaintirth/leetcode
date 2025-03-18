class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) 
    {
        int n=nums.size();
        int max_ending = nums[0];
        int max_so_far = nums[0];
        int min_ending = nums[0];
        int min_so_far = nums[0];
        for(int i=1;i<n;i++)
        {
            //gives max sum subarray
            max_ending = max(nums[i],max_ending+nums[i]);
            max_so_far=max(max_ending,max_so_far);


            //gives min sum subarray , its abs will give max negative sum subarray
            min_ending = min(nums[i],min_ending+nums[i]);
            min_so_far=min(min_ending,min_so_far);
        }
        return max(max_so_far,abs(min_so_far));    
    }
};
