class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n=nums.size();
        int ans = 0;
        for(int i=0;i<n-2;i++){
            int first = nums[i];
            int second = nums[i+1];
            int third = nums[i+2];
            if(first + third == second/2 && second%2 == 0)ans++;
        }
        return ans;
    }
};
