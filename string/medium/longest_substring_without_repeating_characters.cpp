class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char,int> indexMap;
        int l=0;
        int r=0;
        int size;
        int maxlen=0;
        while(r<s.size())
        {
            if(indexMap.find(s[r])!=indexMap.end())
            {
                l=max(l,indexMap[s[r]]+1);
            }
            indexMap[s[r]]=r;
            size=r-l+1;
            maxlen = max(maxlen,size);
            r++;
        }
        return maxlen;    
    }
};
