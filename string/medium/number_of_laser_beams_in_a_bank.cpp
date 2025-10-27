#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int countDevices(string s){
        int count=0;
        for(char c : s){
            if(c=='1'){
                count++;
            }
        }
        return count;
    }

    int numberOfBeams(vector<string>& bank) {
        int prev=0;
        int result=0;
        for(auto& rows : bank){
            int curr = countDevices(rows);
            if(curr>0){
                result += curr*prev;
                prev = countDevices(rows);
            }
        }
        return result;
    }
};