#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        set<vector<int>> s;
        vector<vector<int>> result;
        for(int i=0;i<n;i++){
            int first = nums[i];
            int low=i+1;
            int high=n-1;
            int targetSum = -first;
            while(low<high){
                if(nums[low]+nums[high]==targetSum){
                    if(!s.count({first,nums[low],nums[high]})){
                        result.push_back({first,nums[low],nums[high]});
                        s.insert({first,nums[low],nums[high]});
                    }
                    low++;
                    high--;
                }
                if(nums[low]+nums[high]>targetSum){
                    high--;
                }
                if(nums[low]+nums[high]<targetSum){
                    low++;
                }
            }
        }
        return result;
    }
};