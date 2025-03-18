#include<algorithm>
#include<string>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        int m=strs[0].length();
        string prefix="";
        int i=0;
        while(i<m)
        {
            if(n==1)
            {
                prefix=strs[0];
                break;
            }
            else if(strs[0][i]==strs[n-1][i])
            {
                prefix+=strs[0][i];
                i++;
            }
            else
            {
                break;
            }
        }
        return prefix;
    }
};
