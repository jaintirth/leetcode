class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int n=nums.size();
        int min=nums[0];
        int max=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]<min)
            {
                min=nums[i];
            }
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
        int r=max%min;
        while(r!=0)
        {
            max=min;
            min=r;
            r=max%min;
        }
        return min;    
    }
};
