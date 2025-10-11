#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef long long ll;
    unordered_map<ll,ll> mp;
    vector<ll> t;
    int n;

    ll solve(vector<ll>& nums, int i){
        if(i>=n){
            return 0;
        }
        if(t[i]!=-1){
            return t[i];
        }
        //skip
        ll skip = solve(nums, i+1);

        //take
        int j = lower_bound(begin(nums)+i+1, end(nums), nums[i]+3) - begin(nums);

        ll take = nums[i] * mp[nums[i]] + solve(nums, j);

        return t[i]=max(skip, take);
    }

    ll maximumTotalDamage(vector<int>& power) {
        for(int& x: power)
        {
            mp[x]++;
        }    

        vector<ll> nums(mp.size());
        for(auto& it : mp){
            nums.push_back(it.first);
        }

        sort(begin(nums), end(nums));
        n = nums.size();
        t.assign(n+1, -1);

        return solve(nums, 0);
    }
};