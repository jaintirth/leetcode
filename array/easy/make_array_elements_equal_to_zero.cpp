#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool allZeros(vector<int> nums){
        for(int i : nums){
            if(i!=0){
                return false;
            }
        }
        return true;
    }

    void simulate(int curr, vector<int>& nums, int direction ,int& count){
        int n = nums.size();
        vector<int> v = nums;
        while(curr>=0 && curr<n){
            if(v[curr]==0){
                curr += direction;
                continue;
            }
            if(v[curr]>0){
                v[curr] -= 1;
                direction *= -1;  // changes direction 
                curr += direction;
                continue;
            }
        }
        if(allZeros(v)){
            count++;
        }
    }

    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int curr=0;curr<n;curr++){
            if(nums[curr]==0){
                simulate(curr, nums, 1, count);  //right
                simulate(curr, nums, -1, count);  //left
            }
        }
        return count;
    }
};