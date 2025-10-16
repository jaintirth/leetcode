#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = nums.size();

        unordered_map<int, int> m;

        for(int& i:nums){
            int r = ((i%value)+value) % value;
            m[r]++;
        }
       
        int MEX=0;
        while(m[(MEX%value)]>0){
            m[(MEX%value)]--;
            MEX++;
        }
        return MEX;
    }
};