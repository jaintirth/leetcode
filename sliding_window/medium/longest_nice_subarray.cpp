class Solution {
public:

    bool pairWise(vector<int>& nums,int left,int right)
    {
        int l=left;
        int r;
        int n=nums.size();
        int val;
        while(l<n)
        {
            r=l+1;
            while(r<=right)
            {
                val=nums[l]&nums[r];
                if(val!=0)
                {
                    return false;
                }
                r++;
            }    
            l++;
            
        }
        return true;
    }

    int longestNiceSubarray(vector<int>& nums) 
    {
        int n=nums.size();
        int len;
        int maxL=1;
        int left=0;
        int right=1;
        while(right<n)
        {
            if(!pairWise(nums,left,right))
            {
                left++;
            }
            else
            {
                len=right-left+1;
                maxL=max(maxL,len);
            }
            right++;
        }
        return maxL;
    }
};
