class Solution {
public:
    int maximumCount(vector<int>& nums) 
    {
        int n=nums.size();
        int pos=0;
        int neg=0;
        int zero=0;
        int index=n;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                neg++;
            }
            else if(nums[i]==0)
            {
                zero++;
            }
            else
            {
                index=i;
                break;
            }
        }
        pos=n-index;
        return max(pos,neg);
    }
};
