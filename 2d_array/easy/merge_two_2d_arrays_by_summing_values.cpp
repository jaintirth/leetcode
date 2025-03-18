class Solution {
public:
    vector<vector<int>> merged;
    void solve(vector<vector<int>>& nums1, vector<vector<int>>& nums2)
    {
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i][0]==nums2[j][0])
            {
                nums1[i][1]+=nums2[j][1];
                merged.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i][0]<nums2[j][0])
            {
                merged.push_back(nums1[i]);
                i++;
            }
            else
            {
                merged.push_back(nums2[j]);
                j++;
            }
        }
        if(j==nums2.size())
        {
            while(i<nums1.size())
            {
                merged.push_back(nums1[i]);
                i++;
            }
        }
        if(i==nums1.size())
        {
            while(j<nums2.size())
            {
                merged.push_back(nums2[j]);
                j++;
            }
        }
    }
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
    {
        solve(nums1,nums2);
        return merged;
    }
};
