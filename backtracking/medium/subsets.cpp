class Solution {
public:
    vector<vector<int>> result;
    void solve(vector<int> nums,int i,vector<int> temp)
    {
        if(i>=nums.size())
        {
            result.push_back(temp);
            return;
        }

        //if element is included
        temp.push_back(nums[i]);
        solve(nums,i+1,temp);

        //if element is not included
        temp.pop_back();
        solve(nums,i+1,temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int> temp;
        solve(nums,0,temp);
        return result;
    }


};
