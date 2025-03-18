#include<unordered_map>
class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        std::unordered_map<char,int> freqMap;
        for(char c: s)
        {
            freqMap[c]++;
        }
        int k=true;
        int n=freqMap[s[0]];
        for(const auto& pair: freqMap)
        {
            if(pair.second!=n)
            {
                k=false;
            }
        }
        return k;
    }
};
