#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool allOnes(string s){
        for(char c:s){
            if(c=='0') return false;
        }
        return true;
    }

    int smallestNumber(int n) {
        int num=n;
        string binary = bitset<32>(num).to_string();
        binary.erase(0, binary.find_first_not_of('0'));
        while(!allOnes(binary)){
            num++;
            binary = bitset<32>(num).to_string();
            binary.erase(0, binary.find_first_not_of('0'));
        }
        return num;
    }
};