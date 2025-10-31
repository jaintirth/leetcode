#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        unordered_map<int, int> m;
        for(int i : nums){
            m[i]++;
        }
        int count=0;
        for(auto &pair : m){
            if(count==2){
                break;
            }
            if(pair.second==2){
                count++;
                result.push_back(pair.first);
            }
        }
        return result;
    }
};