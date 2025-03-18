class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        bool result=true;
        int n=ransomNote.size();
        unordered_map<char,int> mag;
        unordered_map<char,int> rans;
        for(char c: magazine)
        {
            mag[c]++;
        }
        for(char c: ransomNote)
        {
            rans[c]++;
        }
        for(auto& pair: rans)
        {
            auto it=mag.find(pair.first);
            if(it==mag.end())
            {
                result=false;
                break;
            }
            if(mag[pair.first]<pair.second)
            {
                result=false;
                break;
            }
        }
        return result;
    }
};
