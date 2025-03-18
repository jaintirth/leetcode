class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {   
        int k;
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                k=mid;
                break;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        if(low>high)
        {
            if(nums[mid]>target)
            {
                k=high+1;
            }
            else
            {
                k=low;
            }
        }
        return k;
    }
};
