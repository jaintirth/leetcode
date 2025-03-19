class Solution {
public:

    void flip(vector<int>& nums,int left,int right)
    {
        for(int i=left;i<=right;i++)
        {
            if(nums[i]==1)
            {
                nums[i]=0;
            }
            else
            {
                nums[i]=1;
            }
        }
    }

    int zeroIndex(vector<int>& nums,int left,int right)
    {
        for(int i=left;i<=right;i++)
        {
            if(nums[i]==0)
            {
                return i;
            }
        }
        return -1;
    }

    int minOperations(vector<int>& nums) 
    {
        int n=nums.size();
        int left=0;
        int right=2;
        int count=0;
        while(right<n)
        {
            int index=zeroIndex(nums,left,n-1);
            if(index!=-1)
            {
                left=index;
                right=left+2;
                if(right<n)
                {
                    count++;
                    flip(nums,left,right);
                }
            }
            else
            {
                break;
            }
        }
        if(zeroIndex(nums,0,n-1)==-1)
        {
            return count;
        }
        return -1;
    }
};
