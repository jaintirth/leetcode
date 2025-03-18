class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int rep=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                rep++;
            }
        }
        int k=n-rep;
        int m=0;
        int i=0,j=0;
        while(i<n)
        {
            while(j<n && nums[j]==nums[i])
            {
                j++;
            }
            nums[m]=nums[i];
            m++;
            i=j;
        }
        return k;
    }
};
