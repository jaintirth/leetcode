class Solution {
public:
    vector<int> merged;
    void merge(vector<int>& nums1,vector<int>& nums2)
    {
        int a=nums1.size();
        int b=nums2.size();
        int i=0;
        int j=0;
        while(i<a && j<b)
        {
            if(nums1[i]<nums2[j])
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
        if(i==a)
        {
            while(j<b)
            {
                merged.push_back(nums2[j]);
                j++;
            }
        }
        if(j==b)
        {
            while(i<a)
            {
                merged.push_back(nums1[i]);
                i++;
            }
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        merge(nums1,nums2);
        int n=merged.size();
        if(n%2)
        {
            n-=1;
            n/=2;
            return merged[n];
        }
        else
        {
            n/=2;
            return (merged[n]+merged[n-1])/2.0;
        }
    }
};
