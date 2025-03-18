#include <bits/stdc++.h>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int k=0;
        int len = nums.size();
        int last = len-1;
        for(int i=0;i<len;i++)
        {
            if(nums[i]!=val)
            {
                k++;
            }
        }
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(nums[j]==val && j!=last)
                {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        return k;
    }
};
