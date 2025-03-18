class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) 
    {
        int n=s.size();
        int m=words.size();
        bool b =false;
        string result;
        for(int i=0;i<m;i++)
        {
            result+=words[i];
            if(result.size()>n)
            {
                break;
            }
            if(result==s)
            {
                b=true;
                break;
            }
        }
        return b;    
    }
};
