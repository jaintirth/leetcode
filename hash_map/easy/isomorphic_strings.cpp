class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        int n=s.size();
        unordered_map<char,char> mapS;
        unordered_map<char,char> mapT;
        for(int i=0;i<n;i++)
        {
            char c1=s[i];
            char c2=t[i];
            if((mapS.count(c1) && mapS[c1]!=c2)||(mapT.count(c2) && mapT[c2]!=c1))
            {
                return false;
            }
            mapS[c1]=c2;
            mapT[c2]=c1;
        }
        return true;
    }
};
