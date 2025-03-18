class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        vector<int> v(nums.size());
        auto it = remove_copy(nums.begin(),nums.end(),v.begin(),0);  // copies all element into v except 0 and return new logical end
        fill(it,v.end(),0);  // fills the places from logical end with 0
        return v;    
    }
};
