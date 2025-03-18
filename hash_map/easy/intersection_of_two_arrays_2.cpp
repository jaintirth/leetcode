class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> v;
        unordered_map<int,int> map;
        if(nums1.size()>nums2.size())
        {
            for(int i: nums1)
            {
                map[i]++;
            }
            for(int i=0;i<nums2.size();i++)
            {
                if(map.find(nums2[i])!=map.end() && map[nums2[i]]!=0)
                {
                    v.push_back(nums2[i]);
                    map[nums2[i]]--;
                }
            }
        }
        else
        {
            for(int i: nums2)
            {
                map[i]++;
            }
            for(int i=0;i<nums1.size();i++)
            {
                if(map.find(nums1[i])!=map.end() && map[nums1[i]]!=0)
                {
                    v.push_back(nums1[i]);
                    map[nums1[i]]--;
                }
            }
        }
        return v;    
    }
};
