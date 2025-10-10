#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int> sumEnergy(n, 0);
        int result = INT_MIN;
        int sum;
        for(int i=0; i<n; i++){
            if((i-k)>=0){
                sumEnergy[i] = sumEnergy[i-k] - energy[i-k];
                result = max(result, sumEnergy[i]);
                continue;
            }
            sum = energy[i];
            for(int j=i+k; j<n; j=j+k){
                sum += energy[j];
            }
            sumEnergy[i] = sum;
            result = max(result, sumEnergy[i]);
        }
        return result;
    }
};