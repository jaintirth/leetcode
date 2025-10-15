#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isIncreasing(vector<int>& nums, int start, int k){
        int max=INT_MIN;
        for(int i=start; i<start+k; i++)
        {
            if(nums[i]<=max){
                return false;
            }
            else{
                max=nums[i];
            }
        }
        return true;
    }

    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int totalLen = 2*k;
        for(int i=0;i<=n-totalLen;i++){
            if(isIncreasing(nums, i, k) && isIncreasing(nums, i+k, k)){
                return true;
            }
        }
        return false;
    }
};