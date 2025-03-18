class Solution {
public:
    bool isPalindrome(string s) 
    {
        string res;
        bool result=true;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(char c : s)
        {
            if(isalnum(c))
            {
                res+=c;
            }
        }
        int n=res.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(res[i]!=res[j])
            {
                result=false;
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        return result;
    }
};
