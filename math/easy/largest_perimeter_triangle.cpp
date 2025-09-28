#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        int perimeter=0;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int a=nums[i];
            int b=nums[i+1];
            int c=nums[i+2];
            if(b+c>a){
                perimeter=a+b+c;
                break;
            }
        }
        return perimeter;
    }
};