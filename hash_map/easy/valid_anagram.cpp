#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        bool k=false;
        std::unordered_map<char,int> freqMap1;
        std::unordered_map<char,int> freqMap2;
        
        for(char c : s)
        {
            freqMap1[c]++;
        }

        for(char c : t)
        {
            freqMap2[c]++;
        }

        if(freqMap1==freqMap2)
        {
            k=true;
        }
        return k;
    }
};
