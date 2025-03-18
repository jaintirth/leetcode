class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)    
        {
            if(nums[i]==0)
            {
                count++;
            }
        }
        std::remove(nums.begin(),nums.end(),0);
        int k=n-count;
        for(k;k<n;k++)
        {
            nums[k]=0;
        }    
    }
};
