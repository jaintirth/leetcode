class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> s;
        int start=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])==1){
                s.clear();
                count++;
                start+=3;
                i=start-1;
            }
            else{
                s.insert(nums[i]);
            }
        }
        return count;
    }
};
