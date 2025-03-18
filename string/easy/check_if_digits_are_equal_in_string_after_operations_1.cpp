class Solution {
public:
    bool hasSameDigits(string s) 
    {
        bool m = false;
        int n=s.size();
        for(int i=0;i<n;i++)
            {
                s[i]=s[i]-'0';
            }
        int k=0;
        while(n!=2)
            {
                if(k<n-1)
                {
                    s[k]=(s[k]+s[k+1])%10;
                    k++;
                }
                else
                {
                    n--;
                    k=0;
                }
            }
        if(s[0]==s[1])
        {
            m=true;
        }
        return m;
    }
};
