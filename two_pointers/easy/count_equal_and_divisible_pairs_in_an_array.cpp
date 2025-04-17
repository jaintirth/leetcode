class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int i=0;
        int j;
        int count=0;
        int n=nums.size();
        while(i<n){
            j=i+1;
            while(j<n){
                int rem=(i*j)%k;
                if((nums[i]==nums[j]) && (rem==0)){
                    count++;
                }
                j++;
            }
            i++;
        }
        return count;
    }
};
