class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n=s.size();
        int mid=0;
        string result;
        int len=1;
        int maxL=0;
        int start=0;
        while(mid<n)
        {
            int l=mid;
            int r=mid;
            while(l>=0 && r<n && s[l]==s[r])
            {
                len=r-l+1;
                if(len>maxL)
                {
                    maxL=len;
                    start=l;
                }
                l--;
                r++;
            }
            l=mid;
            r=mid+1;
            while(l>=0 && r<n && s[l]==s[r])
            {
                len=r-l+1;
                if(len>maxL)
                {
                    maxL=len;
                    start=l;
                }
                l--;
                r++;
            }
            mid++;
        }
        return s.substr(start,maxL);
    }
};
