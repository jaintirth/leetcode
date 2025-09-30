#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(vector<int>& nums)
    {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int> result(n-1);
        for(int i=0;i<n-1;i++)
        {
            result[i]=(nums[i]+nums[i+1])%10;
        }
        return solve(result);
    }    

    int triangularSum(vector<int>& nums) {
        return solve(nums);
    }
};