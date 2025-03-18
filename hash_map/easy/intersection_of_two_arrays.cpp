class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> v;
        unordered_map<int,int> hashMap;
        if(m<n)
        {
            for(int num: nums1)
            {
                hashMap[num]++;
            }
            for(int i=0;i<n;i++)
            {
                if(hashMap.find(nums2[i])!=hashMap.end())
                {
                    v.push_back(nums2[i]);
                }
            }
        }
        else
        {
            for(int num: nums2)
            {
                hashMap[num]++;
            }
            for(int i=0;i<m;i++)
            {
                if(hashMap.find(nums1[i])!=hashMap.end())
                {
                    v.push_back(nums1[i]);
                }
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        return v;
    }
};
