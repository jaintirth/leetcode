class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;
        int j=-1;
        int sum=0;
        int len;
        int minlen=n+1;
        while(j<n)
        {
            if(sum<target)
            {
                j++;
                if(j<n)
                    sum+=nums[j];
            }
            else
            {
                len=j-i+1;
                minlen=min(len,minlen);
                sum-=nums[i];
                i++;
            }
        }
        if(minlen==n+1)
        {
            minlen=0;
        }
        return minlen;    
    }
};
