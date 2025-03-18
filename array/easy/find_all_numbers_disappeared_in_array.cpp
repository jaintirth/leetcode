class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
            auto it = find(nums.begin(),nums.end(),i);
            if(it==nums.end())
            {
                v.push_back(i);
            }
        }
        return v;    
    }
};
