class Solution {
public:
    vector<vector<int>> result;
    void solve(int n,vector<int>& nums,vector<int>& curr,vector<bool>& used)
    {
        if(curr.size()==n)
        {
            result.push_back(curr);
            return;
        }

        for(int i=0;i<n;i++)
        {
            if(used[i])
            {
                continue;
            }
            //if current element is selected
            used[i]=true;
            curr.push_back(nums[i]);
            solve(n,nums,curr,used);

            //if current element is not selected
            used[i]=false;
            curr.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) 
    {
        int n=nums.size();
        vector<bool> used(n,false);
        vector<int> curr;
        solve(n,nums,curr,used);
        return result;
    }
};
