class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        int index=0;
        int maxIndex=0;
        if(n==1)
        {
            return true;
        }
        for(int i=0;i<n-1;i++)
        {
            if(i>maxIndex)
            {
                return false;
            }
            index=i+nums[i];
            maxIndex=max(index,maxIndex);
            if(maxIndex>=n-1)
            {
                return true;
            }
        }
        return false;
    }
};
