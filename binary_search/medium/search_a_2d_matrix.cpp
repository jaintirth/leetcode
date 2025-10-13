#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool binarySearch(vector<int> v, int target){
        int n=v.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]==target){
                return true;
            }
            if(v[mid]>target){
                r=mid-1;
            }
            if(v[mid]<target){
                l=mid+1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0;i<m;i++){
            if(matrix[i][0]>target){
                return false;
            }
            if(binarySearch(matrix[i], target)){
                return true;
            }
        }
        return false;
    }
};