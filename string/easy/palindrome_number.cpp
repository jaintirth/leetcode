#include<string>
class Solution {
public:
    bool isPalindrome(int x) {
        string z = to_string(x);
        int len = z.size();
        int m=len/2;
        for(int i=0;i<m;i++)
        {
            if(z[i]!=z[len-i-1])
            {
                return false;
            }
        }
        return true;
    }
};
