#include<string>
class Solution {
public:
    bool hasSpecialSubstring(string s, int k) 
    {
        bool m=false;
        int n=s.size();
        string subs;
        for(int i=0;i<=n-k;i++)
        {
            subs=s.substr(i,k);
            char c=s[i];
            bool containsOnly = true;
            for(char ch : subs)
            {
                if(ch!=c)
                {
                    containsOnly = false;
                    break;
                }
            }
            bool before=true;
            if(i>0)
            {
                char c1 = s[i-1];
                if(c1==c)
                {
                    before=false;
                }
            }
            bool after=true;
            if(i+k<n)
            {
                char c2=s[i+k];
                if(c2==c)
                {
                    after=false;
                }
            }
            if(containsOnly && before && after)
            {
               m=true;
                break;
            }
        }
        return m;
    }
};
