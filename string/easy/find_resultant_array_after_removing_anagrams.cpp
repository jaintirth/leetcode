#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isAnagram(string s1, string s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        int l=0;
        int r=1;
        while(l<r && r<n){
            if(isAnagram(words[l], words[r])){
                words.erase(words.begin()+r);
                n=words.size();
                l=0;
                r=1;
                continue;
            }
            l++;
            r++;
        }
        return words;
    }
};