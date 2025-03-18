class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        int n=s.size();
        vector<int> v(3,0);
        int i=0;
        int ans=0;
        for(int j=0;j<n;j++)
        {
            v[s[j]-'a']++;
            while(v[0]>0 && v[1]>0 && v[2]>0)
            {
                ans+=n-j;
                v[s[i]-'a']--;
                i++;
            }
        }
        return ans;
    }
};
