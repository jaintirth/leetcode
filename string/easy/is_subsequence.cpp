class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        bool res=true;
        int pos;
        int maxPos=-1;
        for(char c : s)
        {
            pos = t.find(c,maxPos+1);
            if(pos<maxPos || pos==string::npos)
            {
                res=false;
                break;
            }
            maxPos = max(maxPos,pos);
        }
        return res;    
    }
};
