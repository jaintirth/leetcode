class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int i=0;
        int j=0;
        int count=0;
        int prod=1;
        while(i<nums.size()){
            if(i==j){
                if(nums[j]<k){
                    prod=nums[j];
                    count++;
                }
                else{
                    i++;
                }
                j++;
            }
            else{
                prod*=nums[j];
                if(prod<k){
                    count++;
                    j++;
                }
                else{
                    i++;
                    j=i;
                }
            }
            if(j==nums.size()){
                i++;
                j=i;
            }
        }
        return count;
    }
};
