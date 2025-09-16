#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) 
    {
        vector<int> st;
        for(int num:nums)
        {
            long long curr = num;
            while(!st.empty() && gcd(st.back(),curr)>1)
            {
                curr = lcm(st.back(),curr);
                st.pop_back();
            }
            st.push_back(curr);
        }
        return st;
    }
};