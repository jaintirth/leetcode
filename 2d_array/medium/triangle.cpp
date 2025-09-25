#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int result=triangle[0][0];

        if(triangle.size()==1){
            return result;
        }
        
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    triangle[i][0]+=triangle[i-1][0];
                }
                else if(j==i){
                    triangle[i][i]+=triangle[i-1][i-1];
                }
                else{
                    int left_sum=triangle[i-1][j-1]+triangle[i][j];
                    int right_sum=triangle[i-1][j]+triangle[i][j];
                    triangle[i][j] = min(right_sum,left_sum);
                }
            }
        }
        vector<int> sum;
        for(int i=0;i<triangle.size();i++){
            int n=triangle.size()-1;
            sum.push_back(triangle[n][i]);
        }
        return *min_element(sum.begin(), sum.end());
    }
};