class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n=s.length();
        int i=n-1;
        int len=0;
        while(i>=0)
        {
            if(s[i]==' ' && len==0)
            {
                i--;
            }
            else if(s[i]==' ' && len!=0)
            {
                break;
            }
            else
            {
                len++;
                i--;
            }
        }
        return len;    
    }
};
