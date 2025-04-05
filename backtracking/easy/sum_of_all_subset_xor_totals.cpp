class Solution {
public:
    vector<vector<int>> result;

    void solve(vector<int>& nums,int i,vector<int>& temp)
    {
        if(i>=nums.size()){
            result.push_back(temp);
            return;
        }

        //include
        temp.push_back(nums[i]);
        solve(nums,i+1,temp);

        //exclude
        temp.pop_back();
        solve(nums,i+1,temp);
    }

    int subsetXORSum(vector<int>& nums) 
    {
        vector<int> temp;
        solve(nums,0,temp);
        int xor_val;
        int sum=0;
        for(int i=0;i<result.size();i++){
            xor_val=0;
            for(int j=0;j<result[i].size();j++){
                xor_val^=result[i][j];
            }
            sum+=xor_val;
        }
        return sum;
    }
};
