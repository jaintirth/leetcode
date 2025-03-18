class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                v1.push_back(nums[i]);
            }
            else if(nums[i]>pivot)
            {
                v3.push_back(nums[i]);
            }
            else
            {
                v2.push_back(nums[i]);
            }
        }
        vector<int> merged = v1;
        merged.insert(merged.end(),v2.begin(),v2.end());
        merged.insert(merged.end(),v3.begin(),v3.end());   
        return merged;
    }
};
