class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i=0,j=0;
        int size=m+n;
        int k=0;
        vector<int> arr(size,0);
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                arr[k]=nums1[i];
                i++;
                k++;
            }
            else
            {
                arr[k]=nums2[j];
                j++;
                k++;
            }
        }
        if(i==m)
        {
            while(j<n)
            {
                arr[k]=nums2[j];
                j++;
                k++;    
            }
        }
        if(j==n)
        {
            while(i<m)
            {
                arr[k]=nums1[i];
                i++;
                k++;    
            }
        }
        for(int i=0;i<size;i++)
        {
            nums1[i]=arr[i];
        }
    }
};
